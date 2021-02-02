#include<stdio.h>
#include<stdlib.h>
/*
	题目：有5个人坐在一起，问第五个人多少岁？他说比第4人大2岁。问第4个人岁数，
		  他说比第3个人大2岁。问第三个人，又说比第2人大两岁。问第2个人，说比第1
		  个人大2岁。最后问第一个人，他说是10岁，请问第五个人多大？
	程序分析：利用递归的方法，顺序的思路解这道题
*/
int fun(int n);
int main(){
	int p5=fun(5);
	printf("第五个人的年龄是：%d\n",p5);
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