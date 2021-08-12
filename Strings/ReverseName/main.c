#include <stdio.h>
int main(){

    char name[50];
    int numberOfLetters = 0;
    int i;
    
    printf("Name : ");
    scanf("%s",name);
    while(name[numberOfLetters] != '\0')
{

numberOfLetters++;

}    
printf("Reverse Name : ");
for(i = numberOfLetters -1 ; i >=0 ; i--){
    printf("%c",name[i]);
}
printf("\n");

    return 0;
}