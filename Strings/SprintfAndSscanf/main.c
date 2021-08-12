#include <stdio.h>
#include <ctype.h>
int main(){

    int x;
    char s[80];
    char s2[80] ="134 3.14";
    double y;

    sscanf(s2,"%d%lf",&x,&y);
    sprintf(s,"x = %d\ny = %4.2lf",x,y);
    printf("s :\n%s \n",s);

    
    return 0;
}