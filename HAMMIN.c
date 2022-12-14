#include<stdio.h>
#include<math.h>
#include<string.h>
int Min(int a[], int i, int n)
{
	int	min=a[1];
	for(i=1; i<=n; i++)
	{
		if(min>=a[i])
		{
			min=a[i];
		}
	}
	return min;
}
int main()
{
	int a[1000];
	int i, min, n;
	printf("N = ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		printf("so thu %d: ", i);
		scanf("%d", &a[i]);
	}
	printf("so nho nhat: %d", Min(a,i,n));
}
