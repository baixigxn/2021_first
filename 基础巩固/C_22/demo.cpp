#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ����5��������һ���ʵ�����˶����ꣿ��˵�ȵ�4�˴�2�ꡣ�ʵ�4����������
		  ��˵�ȵ�3���˴�2�ꡣ�ʵ������ˣ���˵�ȵ�2�˴����ꡣ�ʵ�2���ˣ�˵�ȵ�1
		  ���˴�2�ꡣ����ʵ�һ���ˣ���˵��10�꣬���ʵ�����˶��
	������������õݹ�ķ�����˳���˼·�������
*/
int fun(int n);
int main(){
	int p5=fun(5);
	printf("������˵������ǣ�%d\n",p5);
	system("pause");
	return 0;
}
int fun(int n){
	int p;
	int p1=10;
	if (n==1)
	{
		return p1;
	}
	else
	{	
		p=fun(n-1)+2;
	}
	return p;
}