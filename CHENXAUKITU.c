#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int p,q,i,j,f;
	char w[1000];
	char s[1000];
	
	printf("Nhap W = ");
	gets(w);
	printf("Nhap S = ");
	gets(s);
	
	
	printf("P = ");
	scanf("%d", &p);
	printf("Q = ");
	scanf("%d", &q);
	printf("Ket qua: ");
	
	if(p<strlen(w)||q<strlen(w))
	{
		for(i=0; i<strlen(w); i++)
		{
		
		if(i==q)
		{
			for(j=0; j<strlen(s); j++)
			{
				printf("%c", s[j]);
			}
		}
		if(i==p)
		{
			for(j=0; j<strlen(s); j++)
			{
				printf("%c", s[j]);
			}
		}
		printf("%c", w[i]);
	}
	}
	
}
