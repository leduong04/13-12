#include<stdio.h>
#include<string.h>
int main()
{
	char s[100], ch;
	int dem, i,k;
	printf("Nhap W = ");
	fflush(stdin);
	gets(s);
	//Xoa dau cach dau xau
	while (s[0] == ' ') 
	for(i=1;s[i]!=0;i++)s[i-1]=s[i];
	//Xoa dau cach xuoi xau
	k = strlen(s);
   	while(s[k-1]==' ' && k>0) s[--k]=0;
   	//Xoa dau cach thua giua 2 tu
   	k = strlen(s);
   	i=0;
   	while(i < k-1)
   	if(s[i]==' ' && s[i+1]==' ') strcpy(&s[i],&s[i+1]);
   	else i++;
   	
	printf("Chuan hoa = %s\n",s);
	//Dem ky tu thoa man
//	printf("Nhap ky tu can dem ch = ");
//	scanf("%c",&ch);
//	dem = 0;
//	for(i=0; i < strlen(s); i++)
//	if(s[i]==ch) dem++;
//	printf("So ky tu thoa man dieu kien la  %d ", dem);
//	//Dem tu
//	dem = s[0] == ' ' ? 0 : 1;
//	for (i=1; i < strlen(s); i++)
//		if((s[i] == ' ') && (s[i-1] != ' ')) dem++;
//	if(s[0]==' ') dem++;
//	printf("\nSo tu la  %d ", dem);
//
	return 0;

}


