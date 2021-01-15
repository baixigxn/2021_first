#include<stdio.h>
#include<stdlib.h>
/*
	题目：输出9*9口诀的五种形式
*/
void printfTable(int n);//长方形
void printfTable1(int n);//左下三角
void printfTable2(int n);//左上三角
void printfTable3(int n);//右下三角
void printfTable4(int n);//右上三角
void main()
{
	int m;
	scanf("%d",&m);
	printfTable(m);
	printfTable1(m);
	printf("---------------------------------------------------------------------\n");
	printfTable2(m);
	printfTable4(m);
	printf("---------------------------------------------------------------------\n");
	printfTable3(m);
	system("pause");
}
void printfTable(int n){
	int i,j;
	for (i = 1; i <= n; i++){
		for (j = 1; j <=n; j++){
			printf("%d*%d=%2d\t",j,i,i*j);//%2d控制宽度为两个字符，且右对齐   -t为tab缩进
		}
		printf("\n");
	}
}
void printfTable1(int n){
	int i,j;
	for (i = 1; i <= n; i++){
		for (j = 1; j <=i; j++){
			printf("%d*%d=%-2d\t",j,i,i*j);//-2d表示左对齐且控制宽度为2字符
		}
		printf("\n");
	}
}
void printfTable2(int n){
	int i,j;
	for (i = 1; i <= n; i++){
		for (j = i; j <=n; j++){
			printf("%d*%d=%-2d\t",i,j,i*j);
		}
		printf("\n");
	}
}
void printfTable3(int n){
	int i,j;
	for (i = 1; i <= n; i++){
		for (j = 1; j <=n; j++){
			while(j<i){//当列比行小的时候，使用tab键来进行缩进，同时j++ 
				printf("\t");
				j++;
			}
			printf("%d*%d=%2d\t",i,j,i*j);
		}
		printf("\n");
	}
}
void printfTable4(int n){
	int i,j;
	for (i = 1; i <= n; i++){
		for (j = 1; j <=n-i; j++){
			printf("\t");
		}
		for (j = 1; j <=i; j++){
			printf("%d*%d=%2d\t",i,j,i*j);
		}
		printf("\n");
	}
}