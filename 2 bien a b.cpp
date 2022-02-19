#include <stdio.h>
int a,b;
void swap()
{
    int tg;
    tg= a; a = b; b = tg;
    printf("\n Trong thu tuc:  a = %d  b = %d", a,b);
}
void main()
{

    a = 3; b = 7;
printf("\n Truoc thu tuc: a = %d b =%d",a,b);
swap();
printf("\n Sau thu tuc: a = %d b = %d",a,b);
}

