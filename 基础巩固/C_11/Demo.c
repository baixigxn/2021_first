#include<stdio.h>
#include<stdlib.h>
/*
	题目：求s=a+aa+aaa+aaaa+aa…a的值，其中a是一个数字，例如2+22+222+2222+22222（此时共有5个数相加），几个数相加由键盘控制
*/
void fun(int a,int n);
void main(){
	int a,n;
	printf("请输入a和n的值，中间用逗号隔开\n");
	scanf("%d,%d",&a,&n);
	fun(a,n);
	system("pause");
}
void fun(int a,int n){
	int count=1;
	long int sn=0,tn=0;
	printf("a=%d,n=%d",a,n);
	while (count<=n)
	{
		tn=tn+a;
		sn=sn+tn;
		a=a*10;
		count++;
	}
	printf("\na+aa+aaa+aaaa+aa…a=%ld\n",sn);
}