#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ��дһ����������һ���ַ����ĳ��ȣ���main�����������ַ�����������䳤��
*/
int fun(char *str){
	int len=0;
	while (*str!='\0')
	{
		len++;
		str++;
	}
	return len;
}
int main(void){
	char str[100];
	char *p=str;
	printf("������һ���ַ���\n");
	scanf("%s",p);
	//gets(str);
	puts(str);
	printf("\n�����ǣ�%d",fun(p));
	system("pause");
	return 0;
}