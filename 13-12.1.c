#include<stdio.h>
#include<math.h>
#include<string.h>
#include<conio.h>
void ktra(int a, int i, int n)
{
	
	n=0;
	while(a>0)
	{
		i = a%10;
		n = n+i;
		a = a/10;
	}
//	printf("Tong cac chu so cua A la %d", n);
	
	if(n%3==0)
	{
		printf("A co chia het cho 3");
	}
	else
	{
		printf("A ko chia het cho 3");
	}
}

int main()
{
	int a, n, i, j, x;
	printf("A = ");
	scanf("%d", &a);
	ktra(a, i, n);
}
