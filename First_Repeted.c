#include <stdio.h>

int main()
{
	long long int i,j,n;
	int ind,ele;
	scanf("%lld",&n);
        long long int arr[n];
		
	for(i=0; i<n; i++)
	{
		scanf("%lld",&arr[i]);
	}

	ind=-1;
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(arr[i]==arr[j])
			{
				ele=arr[j];
				ind=j;
				break;
			}				
		}
	}
	if(ind!=-1)
		printf("%d\n",ele);
	else
		printf("'unique'\n");

	return 0;
}
