#include <stdio.h>

struct std
{
    char name[20];
    char surname[20];
    int id;

};

int main()
{
    struct std s1 = {"Mehmet", "Ozkan", 1};
    struct std s2 = {"Ahmet", "Bozkurt", 2};
    printf("\n---Students---\nName = %s  Surname = %s  Id = %d\nName = %s  Surname = %s  Id = %d"
    , s1.name, s1.surname, s1.id, s2.name, s2.surname, s2.id);
    
    
    return 0;
}
