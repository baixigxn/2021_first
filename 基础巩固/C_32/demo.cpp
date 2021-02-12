#include<stdio.h>
#include<stdlib.h>
/*
	题目：取一个整数a从右端开始的4-7位
	例：输入一个十进制数123456789，结果为：6543			
*/
int main(){
	int num;//输入的整数要大于7位
	printf("请输入一个大于7位的整数:\n");
	scanf("%d",&num);
	int k=0;//记录整数的每一位数
	while (true)
	{
		k++;
		if (k>3 & k<8)//输出相应的位数，这里和之前的逆序输出五位整数一致
		{
			printf("%d",num%10);
			num=num/10;
		}else
		{
			num=num/10;
		}
		if (k==8)
		{
			break;
		}
	}
	system("pause");
	return 0;
}