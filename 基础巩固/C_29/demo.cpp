#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ����һ�������������
*/
void fun1(int a[]);//������һ������������������
void fun2(int a[]);//����ĵ�һ�������һ�����������ڶ����͵����ڶ�����������������
int main(){
	int a[5]={1,2,3,4,5};
	int i;
	//fun1(a);
	fun2(a);
	system("pause");
	return 0;
}
void fun1(int a[]){
	int i;
	int j=4;;
	int b[5];
	for (i = 0; i < 5; i++)
	{
		b[j]=a[i];
		j--;
	}
	printf("��һ���������ý��:\n");
	for (i = 0; i < 5; i++)
	{
		a[i]=b[i];
		printf("%d",a[i]);
	}

}
void fun2(int a[]){
	int i;
	int t;
	for (i = 0; i < 3; i++)
	{
		t=a[i];
		a[i]=a[4-i];
		a[4-i]=t;	
	}
	printf("�ڶ����������ý��:\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d",a[i]);
	}
}