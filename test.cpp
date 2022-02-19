#include <stdio.h>
#include <conio.h>
int main ()
{
	int n,tong;
	scanf("%d",&n);
	int a[n-1];
	int dodai=n;
	for (int i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	int dem=0;
	while (dodai!=0)
	{
		if (dem+dodai-1>n-1) 
		{
			dodai--;
			dem=0;
		}
		else
		{
			tong=0;
			for(int i=dem;i<=dem+dodai-1;i++)
			{
				tong+=a[i];		
            }
			if (tong<0) dem++;
			else break;
		}
	}
	printf("%d",dodai);
	return 0;
}