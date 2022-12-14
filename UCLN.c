#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int Chia3(int a, int s, int k, int i)
{
	while(a>0)
	{
		i=a%10;
		s=s+i;
		a=a/10;
		
		}	
		printf("tong cac chu so la %d\n", s);
		return s;
	
	while(a<0)
	{
		i=a%10;
		k=k+i;
		a=a/10;
	}
		printf("tong cac chu so la %d\n", k);
		return k;
}


int main()
{
	int i,j,a,q,p,s=0;
	int k=0;
	printf("Nhap so a: ");
	scanf("%d", &a);
	if(Chia3(a,s,k,i)%3==0)
	{
		printf("yes");
	}
	else
	printf("No");
}
