#include <stdio.h>
#include <string.h>
union human
{
    int age;
    float size;
    char gender;

};

int main()
{

    union human h1;

    h1.gender = 'E';
    printf("1 - \nGender = %c \nAge = %d \nSize = %f \n\n",h1.gender, h1.age, h1.size);

    h1.size = 1.74;
    printf("2 - \nGender = %c \nAge = %d \nSize = %f \n\n",h1.gender, h1.age, h1.size);

    h1.age = 36;
    printf("3 - \nGender = %c \nAge = %d \nSize = %f \n\n",h1.gender, h1.age, h1.size);
    

    return 0;
}
