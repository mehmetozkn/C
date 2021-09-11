#include <stdio.h>
#include <string.h>

struct staff_info
{
    char name[20];
    char departmant[20];
    int salary;

};


int main()
{
    struct staff_info staff[2];
    int i;
    for(i = 0 ; i < 2 ; i++){
        printf("\nLutfen %d. Calisanin Bilgilerini Giriniz\n",(i+1));
        printf("\nName : ");

        scanf("%s", staff[i].name);

        printf("\nDepartmant : ");
        scanf("%s", staff[i].departmant);

        printf("\nSalary : ");
        scanf("%d", &staff[i].salary);
    }
    printf("\n********************\n");
    for(i = 0 ; i < 2 ; i++){
        printf("----------\nName = %s\nDepartmant = %s\nSalary = %d\n----------",staff[i].name, staff[i].departmant, staff[i].salary);
    }

   
    return 0;
}
