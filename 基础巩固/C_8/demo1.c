#include<stdio.h>
#include<stdlib.h>
/*
	题目：打印出所有的“水仙花数”，所谓的“水仙花数”是指一个三位数，其各位数字立方和等于该数本身。
	例如：153是一个“水仙花数”，因为153=1的三次方+5的三次方+3的三次方
	算法分析：利用for循环控制100-999个数，每个数分解出个位，十位，百位
*/
void fun();
void main(){
	fun();
	system("pause");
}
void fun(){
	int i;
	int m,n,k;
	for (i = 101; i <= 999; i++)
	{
		m=i/100;//分解出百位
		n=i/10%10;//分解出十位
		k=i%10;//分解出个位
		if(i==m*m*m+n*n*n+k*k*k){
			printf("%d\t",i);
		}
	}
}