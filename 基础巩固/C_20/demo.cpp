#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ�����õݹ鷽����5!
*/
int fun(int n);
int main(){
	fun(5);
	system("pause");
	return 0;
}
int fun(int n){
	int s=1;
	if (n>1)
	{
		s=n*fun(n-1);
	}
	printf("%d�Ľ׳��ǣ�%d\n",n,s);
	return s;
}