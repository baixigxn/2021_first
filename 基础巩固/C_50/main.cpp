#include<stdio.h>
#include<stdlib.h>
/*
	题目：809*??=800*??+9*??+1  其中??代表两位数，8*??的结果为两位数，
	9*??的结果是3位数。求??代表的两位数，及809*??后的结果
*/
int main(void){
	long int a,b,i;
	a=809;
	for (i = 10; i < 100; i++)
	{
		b=i*a+1;
		if (b>=1000 && b<=10000 && 8*i<100 && 9*i>=100)
		{
			printf("%ld/%ld=809*%ld+%ld",b,i,i,b%i);
		}
	}
	system("pause");
	return 0;
}