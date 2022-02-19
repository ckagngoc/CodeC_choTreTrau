#include <stdio.h>
#include <conio.h>
#define max 100
int F1(int n)
{
    int a[max],f;
    a[0]=0;a[1]=1;
    for (int i=2;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    f=a[n];
    return f;
}
int F2(int n)
{
    int so;
    if (n==1 or n==2)
    {
        so=1;
    }
    else so=F2(n-1)+F2(n-2);
    return so;
}
int main ()
{
    int n;
    printf("CHUONG TRINH TIM SO TRONG DAY FIBONACI");
    printf("\nNhap so n>=2: ");
    scanf("%d",&n);
    printf("\nTheo cach thu nhat: %d",F1(n));
    printf("\nTheo cach thu hai: %d",F2(16));
    return 0;
}