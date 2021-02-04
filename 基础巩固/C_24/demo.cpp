#include<stdio.h>
#include<stdlib.h>
/*
	题目：一个5位数，判断它是不是回文数，即12321是回文数，个位与万位相同，十位与千位相同
*/
int main(){
	int s[5];
	int i;
	for (int i = 0; i < 5; i++)
	{
		printf("请输入这个五位数的第%d位：\n",i+1);
		scanf("%d",&s[i]);
	}
	printf("您输入的五位数是:");
	for (int i = 0; i < 5; i++)
	{
		printf("%d",s[i]);
	}
	if (s[0]==s[4]&&s[1]==s[3])
	{
		printf("\n它是回文数");
	} else
	{
		printf("\n它不是回文数");
	}
	system("pause");
	return 0;
}