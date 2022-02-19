#include <stdio.h>
#define N 5
int main()
{
	int arrData[N]={3,5,1,2,4};
	int i, cSum;
	for (i=0;i<=N;i++) //phan tu ket thuc cua mang la N-1
	{
		cSum=cSum+arrData[i];
	
	}
	printf("Tong gia tri:%d",cSum);

	return 0;
}
