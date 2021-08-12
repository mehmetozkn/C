#include <stdio.h>
#include <stdlib.h>
int main(){

    int x;
    long y;
    double z;
    char s[] = "134";
    char s2[] = "3.14";

    x = atoi(s);
    y = atol(s);
    z = atof(s2);

    printf("%s Dizgisinin int karsiligi = %d, 2 fazlasi = %d\n",s,x,x+2);
    printf("%s Dizgisinin double karsiligi = %.2lf, Yarisi = %.2lf\n",s2,z,z/2);

    
    return 0;
}