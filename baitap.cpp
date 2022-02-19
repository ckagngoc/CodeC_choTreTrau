#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
struct SV
{
   char hoten[100];
   char lop[50];
   int diem;
};
void nhapthongtinSV(SV &sv)
{
    printf("\nHo va Ten: ");fflush(stdin);gets(sv.hoten);
    printf("Nhap lop: ");gets(sv.lop);
    fflush(stdin);
    printf("Nhap diem: ");scanf("%d",&sv.diem); 
    printf("\n----------------------------------------------------\n");
}
void show(SV &a)
{
        printf("%s", a.hoten);
        printf("\t%s", a.lop);
        printf("\t%d", a.diem);
}
void xuly(SV a[], int n) 
{
    SV tg;
    for(int i = 0;i <=n-1;i++) 
    {
        for(int j = i+1; j<=n;j++) 
        {
            if(a[i].diem < a[j].diem) 
            {
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
    printf("\nSinh vien diem cao nhat la: \n");
    show(a[0]);
    printf("\nSinh vien diem thap nhat la: \n");
    show(a[n]);
}
void pressAnyKey() 
{
    printf("\nBam phim bat ky de tiep tuc...");
    getch();
    system("cls");
}
int main ()
{
    int n;
    printf("NHAP SO LUONG SINH VIEN : ");scanf("%d",&n);
    SV a[n-1];
    for(int i=0;i<n;i++)
    {
        //pressAnyKey();
        printf("Nhap sinh vien thu %d:", i + 1);
        nhapthongtinSV(a[i]);
    }
    xuly(a,n-1);
    return 0;
}