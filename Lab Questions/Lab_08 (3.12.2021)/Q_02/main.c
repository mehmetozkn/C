#include <stdio.h>

typedef struct
{
    char *firstName;
    char *lastName;
    int *notlar;

} STUDENT;

void ortalamaYaz(STUDENT *dizi, int n);
int main()
{

    int numStudents = 2;
    int x, i, notsayi;
    STUDENT *students = malloc(numStudents * sizeof *students);

    for (x = 0; x < numStudents; x++)
    {
        students[x].firstName = (char *) malloc(sizeof(char *));

        printf("Adi giriniz = ");
        scanf("%s", students[x].firstName);
        students[x].lastName = (char *)malloc(sizeof(char *));
        printf("Soyadi giriniz = ");
        scanf("%s", students[x].lastName);
        printf("Not sayisi giriniz = ");
        scanf("%d", &notsayi);
        students[x].notlar = (int *)malloc((notsayi + 1) * sizeof(int *));
        students[x].notlar[0] = notsayi;
        for (i = 1; i <= notsayi; i++)
        {

            printf("%d notu giriniz = ", i);
            scanf("%d", &students[x].notlar[i]);
        }
        // scanf("%d",&students[x].rollNumber);
    }

    for (x = 0; x < numStudents; x++)
    {

        printf("First Name: %s, Last Name: %s\n", students[x].firstName, students[x].lastName);
        for (i = 1; i <= students[x].notlar[0]; i++)

            printf("%d notu : %d \n", i, students[x].notlar[i]);
    }

    ortalamaYaz(students, numStudents);
    return (0);
}

void ortalamaYaz(STUDENT *dizi, int n)
{

    int x, i;
    float ort = 0;
    for (x = 0; x < n; x++)
    {
        ort = 0;

        for (i = 1; i <= dizi[x].notlar[0]; i++)
            ort += dizi[x].notlar[i];
        printf("ortalama:%.2f  \n", ort / dizi[x].notlar[0]);
    }
}
