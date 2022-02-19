#include <stdio.h>
#include <conio.h>
#include <string.h>
#define mang 100
void decor (char s[mang])
{
	int i,len;
	i=0;
	while (i<strlen(s))
	{
		if (s[i]==' ' && s[i+1]==' ')
		{
		for (int j=i;j<strlen(s);j++)
			{
			s[j]=s[j+1];	
			}
		}
		else i++;	
	}
	if (s[0]==' ') 
	{
		for (int j=0;j<strlen(s);j++)
			{
			s[j]=s[j+1];	
			}
	}
	len=strlen(s);
	if (s[len-1]==' ') {s[len-1]='\0';}
}
int main ()
{
	char s[mang];
	printf("nhap chuoi:");gets(s);
	decor(s);
	printf("\nchuoi sau sua la:");puts(s);
	return 0;
}
