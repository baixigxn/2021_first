#include<stdio.h>
#include<stdlib.h>
/*
	题目：利用递归函数调用方式，将所输入的5个字符，以相反的顺序打印出来
*/
void fun(int n);
int main(){
	printf("请输入5个字符\n");
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