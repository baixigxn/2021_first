#include<stdio.h>
#include<stdlib.h>
/*
	题目：古典问题，有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月
		后又生一对兔子，假如兔子都不死，问每个月的兔子总数是多少？
	算法分析：兔子的对数符合斐波那契数列数列，1,1,2,3,5,8,13,21,34……
*/
int noDigui(int n);//非递归的方式
int Digui(int n);//递归方式
int Shuzu();//数组表示
void main(){
	int i;
	printf("\n--------非递归方式---------\n");
	noDigui(10);
	printf("\n--------递归方式---------\n");
	for (i = 1; i <= 20; i++)
	{
		printf("%d\t",Digui(i));
	}
	printf("\n--------数组表示---------\n");
	Shuzu();
	system("pause");
}
int noDigui(int n){
	int i;
	int n1,n2;
	n1=n2=1;
	for (i = 1; i <= n; i++)
	{
		printf("%d\t",n1);
		printf("%d\t",n2);
		n1=n1+n2;
		n2=n2+n1;
	}
	return 0;
}
int Digui(int n)
{
	if(n==1 || n==2)
	{
		return 1;
	}else
	{
		return Digui(n-1)+Digui(n-2);
	}
}
int Shuzu(){
	int i;
	int a[20]={0};
	a[0]=a[1]=1;
	for (i = 2; i < 20; i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	for (i = 0; i < 20; i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}