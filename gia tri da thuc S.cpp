#include<conio.h>
#include<stdio.h>
#define N 6
int main()
{
	float S;
	float arrData[N+1]={5,-19,1,-12,-3,};
	float x=-1;
	int i;
	S=arrData[N];
	for(i=N-1;i>=0;i--) 
	{
		S=S*x+arrData[i];
    }
    printf("Gia tri bieu thuc %f",S);
    getch();
    return 0;
}
		
	

