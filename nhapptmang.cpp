#include <stdio.h>
#include <conio.h>
int  nhapmang(int n,int a[100])
{
    for (int i=0;i<n;i++)
    {
        printf("Phan tu thu %d la: ",i+1);
        scanf("%d",&a[i]);
    }
}
int main ()
{
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d",&n);
    int a[n];
    nhapmang(n,a);
}