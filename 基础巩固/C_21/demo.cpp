#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ�����õݹ麯�����÷�ʽ�����������5���ַ������෴��˳���ӡ����
*/
void fun(int n);
int main(){
	printf("������5���ַ�\n");
	fun(5);
	system("pause");
	return 0;
}
void fun(int n){
	char c;
	if(n<=1){
		c=getchar();
		putchar(c);
	}else
	{
		c=getchar();
		fun(n-1);
		putchar(c);
	}
}