#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ���ŵ����⣬��һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�С���ӳ�����������
		������һ�����ӣ��������Ӷ���������ÿ���µ����������Ƕ��٣�
	�㷨���������ӵĶ�������쳲������������У�1,1,2,3,5,8,13,21,34����
*/
int noDigui(int n);//�ǵݹ�ķ�ʽ
int Digui(int n);//�ݹ鷽ʽ
int Shuzu();//�����ʾ
void main(){
	int i;
	printf("\n--------�ǵݹ鷽ʽ---------\n");
	noDigui(10);
	printf("\n--------�ݹ鷽ʽ---------\n");
	for (i = 1; i <= 20; i++)
	{
		printf("%d\t",Digui(i));
	}
	printf("\n--------�����ʾ---------\n");
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