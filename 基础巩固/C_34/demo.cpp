#include<stdio.h>
#include<stdlib.h>
/*
	题目：输入三个数a,b,c，按大小顺序输出，利用指针方法
*/
void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
int main(){
	int a,b,c;
	int *p1,*p2,*p3;
	p1=&a;
	p2=&b;
	p3=&c;
	scanf("%d,%d,%d",p1,p2,p3);
	if (*p1>*p2)
	{
		swap(p1,p2);
	}
	if (a>c)
	{
		swap(p1,p3);
	}
	if(b>c)
	{
		swap(p2,p3);
	}
	printf("%d  %d  %d",a,b,c);
	system("pause");
	return 0;
}