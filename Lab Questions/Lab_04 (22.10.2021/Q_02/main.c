#include <stdio.h>
#include <stdbool.h>

void bul(char [], char[]);

int main(int argc, const char *argv[])
{
    char kocaeli[8] = {'k','o','c','a','e','l','i','\0'};
    char sakarya[8] = {'s','a','k','a','r','y','a','\0'};
    bul(kocaeli, sakarya);
   
    printf("\n");
    return 0;
}

void bul(char k[], char s[]){

    int i;
    int j;
    
    for(i = 0 ; k[i] != '\0' ; i++){
        bool varMi = false;
        char temp = k[i];
        for(j = 0 ; s[j] != '\0';j++){
             if(temp == s[j]) varMi = true;
        }
         if(!varMi) printf("%c\n", temp);
    }

}



