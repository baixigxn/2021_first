#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ������������a,b,c������С˳�����������ָ�뷽��
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