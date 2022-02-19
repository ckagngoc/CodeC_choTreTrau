#include<stdio.h>
#include<math.h>
int main ()
{
    float a,b,c,delta;
    printf("Nhap a,b,c: ");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0.0) printf("Nghiem cua phuong trinh la: %0.2f",-c/b);
    else{
        delta=b*b-4*a*c;
        if (delta<0.0) printf("Phuong trinh eo co nghiem.");
        else{
            if (delta==0.0) printf("Phuong trinh co nghiem kep la: %0.2f",(-b/(2*a)));
            else {
                printf("phuong trinh co hai nghiem la: \n");
                printf("x1= %0.2f",(-b+sqrt(delta))/2*a);
                printf("\nx2= %0.2f",(-b-sqrt(delta))/2*a);
            }
        }
    }
    printf("%0.2f",delta);
    return 0;
}