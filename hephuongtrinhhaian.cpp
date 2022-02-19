#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main ()
{
    int a1,b1,a2,b2,c1,c2;
    float x,y,Dx,Dy,D;
    printf("a1: ");scanf("%d",&a1);
    printf("b1: ");scanf("%d",&b1);
    printf("c1: ");scanf("%d",&c1);
    printf("a2: ");scanf("%d",&a2);
    printf("b2: ");scanf("%d",&b2);
    printf("c2: ");scanf("%d",&c2);
    printf("\nHE PHUONG TRINH LA: ");
    printf("\n%dx + %dy = %d",a1,b1,c1);
    printf("\n%dx + %dy = %d",a2,b2,c2);
    printf("\n----------------------------------------");
    Dx=c1*b2-c2*b1;
    Dy=a1*c2-a2*c1;
    D=a1*b2-a2*b1;            
    if (D==0)
    {
        if (Dx==0 && Dy==0)
        {
            printf("PHUONG TRINH CO VO SO NGHIEM");
        }
        else printf("PHUONG TRINH VO NGHIEM");
    }
    else 
    {
        printf("\nNGHIEM CUA HE LA :");
        printf("\nx= %f",Dx/D);
        printf("\ny= %f",Dy/D);
    }
    return 0;
}