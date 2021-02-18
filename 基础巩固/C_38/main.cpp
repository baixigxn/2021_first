#include<stdio.h>
#include<stdlib.h>
/*
	题目：写一个函数，求一个字符串的长度，在main函数中输入字符串，并输出其长度
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
	printf("请输入一个字符串\n");
	scanf("%s",p);
	//gets(str);
	puts(str);
	printf("\n长度是：%d",fun(p));
	system("pause");
	return 0;
}