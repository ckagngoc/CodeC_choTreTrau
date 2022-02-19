#include<stdio.h>
#define N 7
int main()
{
	int li=1, sl=0;
	int cli=1, csl=0;
	int arrData[N]={1,6,0,2,1,11,9};
	int i;
	for(i=1;i<=N;i++) 
	{
		if(arrData[i]>arrData[i-1])
		{
			cli++;
    	}
		else
    	{		
			if(cli>li)
			{
				li=cli;
				sl=csl;
			}
			cli=1;
			csl=i;
		}
	}
	if(cli>li)
	{
		li=cli;
		sl=csl;
    }	
	printf("Day dai nhat bat dau %d co do dai %d",sl,li);
	return 0;
}






	

