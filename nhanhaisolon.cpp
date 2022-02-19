#include <stdio.h>
#include <conio.h>
#define max 255
char tong(char s1[max],char s2[max],char kq[max])
{
    int len = 0;
  if (strlen(s1)>=strlen(s2)) len=strlen(s1);   // tìm số dài hơn
  else len=strlen(s2);
  strrev(s1);strrev(s2);  // đảo ngược chuỗi số
  for(int i=strlen(s1);i<len;i++)
    {
      strcat(s1,sokhong);
    }
  for(int i=strlen(s2);i<len;i++)
    {
      strcat(s2,sokhong);
    }
  int nho=0;
  printf("a + b = ");
  for (int i=0;i<len;i++)
    {
      tong=0;
      tong=(s1[i]-48)+(s2[i]-48)+nho;
      nho=tong/10;
      kq[i]=tong%10+48;
    }
 strrev(kq);
}
