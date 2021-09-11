#include <stdio.h>
#include <string.h>

struct point
{
    int x,y;

};
void print(struct point b){
    printf("\nc.x = %d\n",b.x);
    printf("c.y = %d\n",b.y);
}
void change(struct point *ptr){
    ptr->x = 7;
    ptr->y = 18;
}

int main()
{

    struct point c = {3,4};
    struct point *cptr;
    print(c);
    change(&c);
    print(c);

    return 0;
}
