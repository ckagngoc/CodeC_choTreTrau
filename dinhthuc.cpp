#include <iostream>
using namespace std;
void  nhapmt(float a[100][100],int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout <<"["<<i<<"]"<<"["<<j<<"]: ";
            cin >>a[i][j];
        }
        cout << endl;
    }
}
void xuatmt(float a[100][100],int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
           cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}
float det(float a[100][100],int n)
{
    float nhan,dt;
    for (int i=0;i<n;i++)
    {
        for (int j=1;j<n;j++)
        {
            nhan=-a[j][i]/a[j-1][i];
            for (int dem=0;dem<n;dem++) a[j][dem]+=(a[j-1][dem]*nhan);
        }
    }
    for (int i=0;i<n;i++)
    {
        dt=dt*a[i][i];
    }
    printf("DINH THUC CUA MA TRAN: %0.2f",dt);
    return 0;
}
int main ()
{
    float mt[100][100];
    int n;
    cout << "NHAP HANG CUA MA TRAN: ";cin >> n;
    nhapmt(mt,n);
    cout <<"MA TRAN DA NHAP LA"<<"\n";
    xuatmt(mt,n);
    cout << "-------------------------------------------" << endl;
    det (mt,n);
    return 0;
}