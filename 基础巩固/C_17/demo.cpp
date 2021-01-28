#include<stdio.h>
#include<stdlib.h>
/*
	题目：打印出如下图案（菱形）
				*
			*	*	*
		*	*	*	*	*
	*	*	*	*	*	*	*
		*	*	*	*	*
			*	*	*
				*
	程序分析：可以把图形分成上下两部分来看待，前四行一个规律，后三行一个规律
			  利用双重for循环，第一层控制行，第二层控制列
*/
void PrintLine(int blank_num,int star_num);
void PrintStar(int n);
int main(){
	PrintStar(4);
	system("pause");
	return 0;
}
void PrintLine(int blank_num,int star_num){
	int i=0;
	for (; i < blank_num; i++)
	{
		printf("\t");
	}
	for (i = 0; i < star_num; i++)
	{
		printf("*");
		printf("\t");
	}
	printf("\n");
}
void PrintStar(int n){
	int i=1;
	//上半部分
	for (i=1; i <= n; i++)
	{
		PrintLine(n-i,2*i-1);
	}
	//下半部分
	for (i=n-1; i >0; i--)
	{
		PrintLine(n-i,2*i-1);
	}
}