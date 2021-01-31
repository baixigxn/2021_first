#include<stdio.h>
#include<stdlib.h>
/*
	题目：利用递归方法求5!
*/
int fun(int n);
int main(){
	fun(5);
	system("pause");
	return 0;
}
int fun(int n){
	int s=1;
	if (n>1)
	{
		s=n*fun(n-1);
	}
	printf("%d的阶乘是：%d\n",n,s);
	return s;
}