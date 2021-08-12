#include <stdio.h>
#include <string.h>
#include <ctype.h>

void isPalindrome(char str[])
{

    int i = 0;
    int j = strlen(str) - 1;
    if (j % 2 == 0)
    {
        printf("The Word is Not Palindrome");
        return;
    }
    else
    {

        while ((i + 1) != j)
        {
            if (str[i++] != str[j--])
            {
                printf("The Word is Not Palindrome");
                return;
            }
        }
        printf("The Word is Palindrome");
    }
}
int main()
{

    char word[20];
    printf("Word : ");
    scanf("%s", word);
    isPalindrome(word);
    printf("\n");

    return 0;
}