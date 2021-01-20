#include<stdio.h>
#include<stdlib.h>
/*
	题目：利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的同学用B表示，60分以下的同学用C表示
	程序分析：(a>b)?a:b这是条件运算符的基本例子
*/
void main(){
	double score;
	char grade;
	while (1)
	{
		printf("请输入一个同学的考试分数\n");
		scanf("%lf",&score);
		grade=score>=90?'A':(score>=60?'B':'C');
		printf("%.2f 属于%c的范围",score,grade);
	}
	
	system("pause");
}