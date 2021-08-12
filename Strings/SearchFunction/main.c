#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){

    char sentence[80];
    char word[20];
    char *searchPtr;
    int count = 0;
    printf("Sentence : ");
    fgets(sentence, 80, stdin);
    printf("Search Word : ");
    scanf("%s", word);
    searchPtr = strstr(sentence, word);
    while (searchPtr != NULL)
    {
    count++;
    searchPtr++;
    searchPtr = strstr(searchPtr, word);     
    }
    printf(" \" %s \" kelimesi cumle icinde %d kere gecer\n",word, count);


    
    return 0;
}