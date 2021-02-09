#include<stdio.h>
#include<stdlib.h>
/*
	题目：将一个数组逆序输出
*/
void fun1(int a[]);//借用另一个数组来逆序存放数组
void fun2(int a[]);//数组的第一个和最后一个数互换，第二个和倒数第二个互换，依次类推
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
	printf("第一个函数调用结果:\n");
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
	printf("第二个函数调用结果:\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d",a[i]);
	}
}