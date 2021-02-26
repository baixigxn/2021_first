#include<stdio.h>
#include<stdlib.h>
/*
	题目：编写一个函数，输入n为偶数时，调用函数求1/2+1/4+…+1/n,
	当输入n为奇数时，调用函数1/1+1/3+…+1/n
*/
//n为奇数
double odd_Number(int n){
	double sum=0;
	int i;
	for (i = 1; i <=n; i+=2)
	{
		sum=sum+(float)1/i;
	}
	return sum;
}
//n为偶数
double even_Number(int n){
	double sum=0;
	int i;
	for (i = 2; i <=n; i+=2)
	{
		sum=sum+(float)1/i;
	}
	return sum;
}
int main()
{
	int n;
	double result=NULL;
	printf("请输入n的值：\n");
	scanf("%d",&n);
	if (n%2==0)
	{
		result=even_Number(n);
	}else
	{
		result=odd_Number(n);
	}
	printf("结果是：%.4lf",result);
	system("pause");
	return 0;
}
