#include<stdio.h>
#include<stdlib.h>
/*
	题目：将一个正整数分解质因数，例如：输入90，打印出90=2*3*3*5
	算法分析：如果这个数的最小质数恰好等于n，说明分解质因数的过程已经结束，打印出即可
*/
void fun(int n);
void main(){
	fun(90);
	system("pause");
}
void fun(int n){
	int i;
	printf("%d=",n);
	for (i = 2; i <= n; i++)
	{
		while (n!=i)
		{
			if (n%i==0)
			{
				printf("%d*",i);
				n=n/i;
			} else
			{
				break;
			}			
		}
	}
	printf("%d",n);
}