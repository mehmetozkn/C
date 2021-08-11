#include <stdio.h>
int main(){

    char name[50];
    int numberOfLetters = 0;
    
    printf("Adınızı Giriniz : ");
    scanf("%s",name);
    while(name[numberOfLetters] != '\0')
{

numberOfLetters++;

}    
printf("Number Of Name : %d",numberOfLetters);

    return 0;
}