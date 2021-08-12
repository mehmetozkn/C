#include <stdio.h>
#include <ctype.h>
int main(){

    char word[20];
    int i;
    
    printf("Word : ");
    scanf("%s",word);
    for(i = 0 ; word[i] != '\0' ; i++){
        if(isupper(word[i])){

            word[i] = tolower(word[i]);
        }else if(islower(word[i])){
            word[i] = toupper(word[i]);
        }

    }
    printf("New Word : %s\n",word);
 



    return 0;
}