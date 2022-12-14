#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	int i;
	char w[1000];
	
	printf("Nhap W = ");
	gets(w);
	printf("W sau khi xoa cac chu so = ");
	for(i=0; i<strlen(w); i++)
	{
		if(w[i]<48||w[i]>57)
		printf("%c", w[i]);
	}
	return 0;
}
