#include<stdio.h>
char a='A';//全局变量
void msg(){//全局函数
	printf("Hello\n");
}
static int n;
void display(){
	n++;
	printf("%d\n",n);
}