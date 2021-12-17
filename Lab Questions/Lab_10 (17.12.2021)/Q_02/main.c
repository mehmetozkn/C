#include <stdio.h>

void newRecord(FILE *);
void display(FILE *);
void update(FILE *);
void deleteRecord(FILE *);
void list(FILE *);

struct Student
{
	int num;
	char name[20];
	char surname[20];
	int note;
};

int main(void)
{
	FILE *file;
	file = fopen("text.txt", "r+");
	if (file == NULL)
		printf("File coult not be opened");
	else
	{
		 //newRecord(file);
		// newRecord(file);
		display(file);
		 update(file);
		 deleteRecord(file);
		// display(file);
		list(file);
	}

	printf("\n");
	return 0;
}

void newRecord(FILE *file)
{
	int ogrNum;
	struct Student std;
	printf("Student No : ");
	scanf("%d", &ogrNum);
	fseek(file, (ogrNum - 1) * sizeof(struct Student), SEEK_SET);
	printf("\nName Surname Note : ");
	scanf("%s%s%d", std.name, std.surname, &std.note);
	std.num = ogrNum;
	fwrite(&std, sizeof(struct Student), 1, file);
}

void display(FILE *file)
{
	struct Student std;
	rewind(file);
	while (!feof(file))
	{
		fread(&std, sizeof(struct Student), 1, file);
		if (std.num != 0 && !feof(file))
		{
			printf("%5d%15s%15s%10d\n", std.num, std.name, std.surname, std.note);
		}
	}
}

void update(FILE *file)
{
	int ogrNum;
	int newNote;
	struct Student std;
	printf("Guncellenecek Student No : ");
	scanf("%d", &ogrNum);
	fseek(file, (ogrNum - 1) * sizeof(struct Student), SEEK_SET);
	fread(&std, sizeof(struct Student), 1, file);
	if (std.num == 0)
	{
		printf("Record is not exist");
	}
	else
	{
		printf("%5d%15s%15s%10d\n", std.num, std.name, std.surname, std.note);
		printf("New Note : ");
		scanf("%d", &newNote);
		std.note = newNote;
		fseek(file, (ogrNum - 1) * sizeof(struct Student), SEEK_SET);
		fwrite(&std, sizeof(struct Student), 1, file);
	}
}

void deleteRecord(FILE *file)
{
	int stdNo;
	struct Student std, emptyStd = {0, "", "", 0};
	printf("Silinecek Student No : ");
	scanf("%d", &stdNo);
	fseek(file, (stdNo - 1) * sizeof(struct Student), SEEK_SET);
	fread(&std, sizeof(struct Student), 1, file);
	if (std.num == 0)
	{
		printf("Record is not exist");
	}
	else
	{
		fseek(file, (stdNo - 1) * sizeof(struct Student), SEEK_SET);
		fwrite(&emptyStd, sizeof(struct Student), 1, file);
	}
}

void list(FILE *file)
{
	int refNot;
	struct Student std;
	printf("Uzeri Listelenecek Notu Giriniz : ");
	scanf("%d", &refNot);
	rewind(file);
	while (!feof(file))
	{
		fread(&std, sizeof(struct Student), 1, file);
		if (std.num != 0 && !feof(file))
		{
			if (std.note > refNot)
			{
				printf("%5d%15s%15s%10d\n", std.num, std.name, std.surname, std.note);
			}
		}
	}
}