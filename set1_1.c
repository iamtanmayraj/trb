#include<stdio.h>
int main()
{
	long long int a;
	scanf("%lld",&a);
	if(a>0)
	{
		printf("Positive");
	}
	else if(a<0)
	{
		printf("Negitive");
	}
	else
	{
		printf("Zero");
	}
}
