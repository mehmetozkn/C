#include <stdio.h>
int main(){

    char name[50];
    int numberOfLetters = 0;
    
    printf("Name : ");
    scanf("%s",name);
    while(name[numberOfLetters] != '\0')
{

numberOfLetters++;

}    
printf("Number Of Letterss : %d\n",numberOfLetters);


    return 0;
}