#include<stdio.h>
#include<stdlib.h>
/*
	题目：求1+2!+3!+……+20!的和
*/
long long int fun(int n);//求阶乘函数
int main(){
	int i;
	long long int sum=0;
	for (i = 1; i <= 20; i++)
	{
		sum=sum+fun(i);
	}
	printf("和是：%lld",sum);
	system("pause");
	return 0;
}
long long int fun(int n){
	int i=1;
	long long int s=1;
	while (i<=n)
	{
		s=s*i;
		i++;
	}
	printf("%d的阶乘是：%lld\n",n,s);
	return s;
	
}