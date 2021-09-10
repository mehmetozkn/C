#include <stdio.h>
int main()
{

    int day, month, year;
    printf("\nDate : ");
    scanf("%d%*c%d%*c%d",&day, &month, &year);
    // Tarihlerin arasına giren karakterleri gözardı eder. ÖR : 20-11-1996 OR 20/11/1996.
    printf("\nDay = %d,  Month = %d,  Year = %d\n",day, month, year);


    return 0;
}
