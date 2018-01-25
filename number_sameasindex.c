#include<stdio.h>

int main()
{
	long long int n;
	scanf("%lld",&n);
	long long int a[n],i,k=0;
	
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i==a[i])
		{
			printf("%lld",a[i]);
			k=1;
		}

	}
	if(k==0)
	printf("-1");
	return 0;
}
