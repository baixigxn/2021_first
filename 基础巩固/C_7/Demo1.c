#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ����һ���������ֽ������������磺����90����ӡ��90=2*3*3*5
	�㷨������������������С����ǡ�õ���n��˵���ֽ��������Ĺ����Ѿ���������ӡ������
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