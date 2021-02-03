#include<stdio.h>
#include<stdlib.h>
/*
	题目：给一个不多于5位的正整数，要求：一、求出它是几位数，二、逆序打印出各位数字
*/
int main(){
	int num;
	int s[5]={0};//使用数组来保存输入的数
	int i;//用来存放一共有多少位数
	printf("请输入一个不大于5位的正整数：\n");
	scanf("%d",&num);
	for (i = 0; num > 0; i++)
	{
		s[i]=num%10;//个位数字就放在数组的第一个，依次存放，这样在打印的时候刚好逆序
		printf("%d",s[i]);
		num=num/10;//将最后一位数去掉
	}
	printf("\n%d位数",i);
	system("pause");
	return 0;
}