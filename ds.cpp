#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#define max 255
struct SinhVien 
{
    int id;
    char ten[30];
    int tuoi;
    float diemToan;
    float diemVan;
    float diemTB;
};
typedef SinhVien SV;
void printLine(int n);
void tinhDTB(SV &sv) 
{
    sv.diemTB =((sv.diemToan + sv.diemVan) / 2)/4;    
}
void capnhapSV(SV a[], int id,int n)
{
    
    int found = 0;
    for(int i = 0; i < n; i++) 
    {
        if (a[i].id == id) 
        {
            found = 1;
            printLine(40);
            printf("\n Cap nhat thong tin sinh vien co ID = %d",id);
            printf("\nTen: "); fflush(stdin); gets(a[i].ten);
            printf("Nhap tuoi: ");scanf("%d",&a[i].tuoi);
            printf("Nhap diem Toan: ");scanf("%f",&a[i].diemToan);
            printf("Nhap diem Van: ");scanf("%f",&a[i].diemVan);
            tinhDTB(a[i]);
            printLine(40);
            break;
        }
    }
    if (found == 0) 
    {
        printf("\n Sinh vien co ID = %d khong ton tai.",id);
    }
}
void nhapthongtinSV(SV &sv, int id)
{
    printf("\nTen: "); fflush(stdin); gets(sv.ten);
    printf("Nhap tuoi: ");scanf("%d",&sv.tuoi);
    printf("Nhap diem Toan: ");scanf("%f",&sv.diemToan);
    printf("Nhap diem Van: ");scanf("%f",&sv.diemVan);
    sv.id = id;
    tinhDTB(sv);
}
void nhapSV(SV a[], int id, int n) 
{
    printLine(40);
    printf("Nhap sinh vien thu %d:", n + 1);
    nhapthongtinSV(a[n], id);
    printLine(40);
}
void timKiemTheoTen(SV a[], char ten[], int n);
void sapxepTheoDTB(SV a[], int n);
void sapXepTheoTen(SV a[], int n);
void show(SV a[], int n);
void ghi(SV a[], int n, char fileName[]);
void pressAnyKey();
void show(SV a[],int n);
int main ()
{
    int key;
    char file[]="sinhvien.txt";
    SV sv[max];
    int soluong=0;
    int id;
    while (true)
    {
        printf("\n*************CHUONG TRINH QUAN LY SINH VIEN***********");
        printf("\n--------------------------MENU-----------------------*");
        printf("\n1.Them sinh vien                                     *");
        printf("\n2.Cap nhap sinh vien boi ID                          *");
        printf("\n3.Sap xep sinh vien theo diem trung binh             *");
        printf("\n4.Tim kiem theo ten                                  *");
        printf("\n5.Sap xep sinh vien theo ten                         *");
        printf("\n6.Hien thi danh sach sinh vien                       *");
        printf("\n7.Xuat danh sach sinh vien ra file student.txt       *");
        printf("\n0.Thoat chuong trinh                                 *"); 
        printf("\n******************************************************");
        printf("\nNhap chuc nang: ");scanf("%d",&key);
        switch(key)
        {
            case 1:
            printf("\n1.Them sinh vien");
            printf("\nThem ID: ");scanf("%d",&id);
            nhapSV(sv,id,soluong);
            printf("\nThem sinh vien thanh cong");
            soluong++;
            pressAnyKey();
            break;
            case 2:
            if (soluong>0)
            {
                printf("\n2.Cap nhap sinh vien boi ID");
                printf("Nhap ID de tim sinh vien: ");scanf("%d",&id);
                capnhapSV(sv,id,soluong);
            }
            else printf("Vui long nhap sinh vien vao danh sach !!!");
            pressAnyKey();
            break;
            case 3:
            if (soluong>0)
            {
                printf("\n3.Sap xep sinh vien theo diem trung binh");
                sapxepTheoDTB(sv,soluong);
                show(sv,soluong);
            }
            else printf("Vui long nhap sinh vien vao danh sach !!!");
            pressAnyKey();
            break;
            case 4:
            if(soluong > 0)
            {
                printf("\n4.Tim kiem theo ten");
                char strTen[40];
                printf("Nhap ten: ");fflush(stdin);gets(strTen);
                timKiemTheoTen(sv,strTen,soluong);
            }
            else printf("Vui long nhap sinh vien vao danh sach !!!");
            pressAnyKey ();
            break;
            case 5:
            if (soluong>0)
            {
                printf("\n5.Sap xep sinh vien theo ten");
                sapXepTheoTen(sv,soluong);
                show(sv,soluong);
            }
            else printf("Vui long nhap sinh vien vao danh sach !!!");
            pressAnyKey ();
            break;
            case 6:
            if (soluong>0)
            {
                printf("\n6.Hien thi danh sach sinh vien");
                show(sv,soluong);
            }
            else printf("Vui long nhap sinh vien vao danh sach !!!");
            pressAnyKey ();
            break;
            case 7:
            if (soluong>0)
            {
                printf("\n7.Xuat danh sach sinh vien ra file student.txt");
                ghi(sv,soluong,file);
            }
            else printf("Vui long nhap sinh vien vao danh sach !!!");
            pressAnyKey ();
            break;
            case 0:
                printf("\nBan da chon thoat chuong trinh!");
                getch();
                return 0;
            default:
                printf("\nKhong co chuc nang nay!");
                printf("\nHay chon chuc nang trong hop menu.");
                pressAnyKey();
                break;
        }
    }
}
void pressAnyKey() 
{
    printf("\n\nBam phim bat ky de tiep tuc...");
    getch();
    system("cls");
}
void sapxepTheoDTB(SV a[], int n) 
{
    SV tg;
    for(int i = 0;i < n;i++) 
    {
        for(int j = i+1; j < n;j++) 
        {
            if(a[i].diemTB > a[j].diemTB) 
            {
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}
void show(SV a[],int n)
{
	printLine(100);
    printf("\nSTT\tID\tHo va ten\t\t\t\tTuoi\tToan\tVan\tDiem TB");
    for(int i = 0; i < n; i++) {
        // in sinh vien thu i ra man hinh
        printf("\n %d", i + 1);
        printf("\t%d", a[i].id);
        printf("\t%s", a[i].ten);
        printf("\t\t\t\t%d", a[i].tuoi);
        printf("\t%.2f", a[i].diemToan);
        printf("\t%.2f", a[i].diemVan);
        printf("\t%.2f", a[i].diemTB);
    }
    printLine(100);
}
void timKiemTheoTen(SV a[], char ten[], int n)
{
    SV arrayFound[max];
    char tenSV[30];
    int found = 0;
    for(int i = 0; i < n; i++) 
    {
        strcpy(tenSV, a[i].ten);       
        if(strstr(strupr(tenSV), strupr(ten))) 
        {
            arrayFound[found] = a[i];
            found++;
        }
    }
    show(arrayFound, found);
}
void sapXepTheoTen(SV a[], int n) 
{
    SV tg;
    char tenSV1[30];
    char tenSV2[30];
    for(int i = 0;i < n; i++) 
    {
        strcpy(tenSV1, a[i].ten);
        for(int j = i+1; j < n; j++) 
        {
            strcpy(tenSV2, a[j].ten);
            if(strcmp(strupr(tenSV1), strupr(tenSV2)) > 0) 
            {
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}
void ghi(SV a[], int n, char fileName[])
{
    FILE * fp;
    fp = fopen (fileName,"w");
    for(int i = 0;i < n;i++)
    {
        fprintf(fp, "%5d%30s%5d%10f%10f%10f\n", a[i].id, a[i].ten,a[i].tuoi, a[i].diemToan, a[i].diemVan, a[i].diemTB);
    }
    fclose (fp);
}
void printLine(int n)
{
    for (int i=0;i<n;i++)
    {
        printf("_");
    }
    printf("\n");
}
