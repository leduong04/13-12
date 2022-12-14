#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
int main()
{
	int min, n;
	int a,b,c,d;
	char s[1000][1000];
	
	printf("N = ");
	scanf("%d", &n);
	
	for(a=1; a<=n; a++)
	{
		printf("Ten ngon ngu lap trinh thu %d: ", a);
		fflush(stdin);
		gets(s[a]);
	}
	min=strlen(s[1]);
	b=1;
	for(a=1; a<=n; a++)
	{
		if(strlen(s[a])<=min){
		strlen(s[a])==min;
		b=a;}
	}
	printf("Ngon ngu ngan nhat cuoi cung la: %s", s[b]);
	return 0;
}
