#include <stdio.h>
#include <string.h>
struct ogrenciler 
{
    char name[20];
    char surname[20];
    int birthday;
    int no;
};

void bilgileriGoster(struct ogrenciler bilgi){
    printf("\nName : %s\nSurname : %s\nBirthday : %d\nNo : %d",bilgi.name, bilgi.surname, bilgi.birthday, bilgi.no);
}

struct ogrenciler ogrenciKayit(){
    struct ogrenciler kayit;
    printf("\n---- Please Enter Information -----\n");
    printf("Name : ");
    scanf("%s",kayit.name);
    printf("\nSurname : ");
    scanf("%s",kayit.surname);
    printf("\nBirthday : ");
    scanf("%d",&kayit.birthday);
    printf("\nNo : ");
    scanf("%d",&kayit.no);
    return kayit;


}

int main()
{

struct ogrenciler ogr1 = ogrenciKayit();

bilgileriGoster(ogr1);

    

    return 0;
}
