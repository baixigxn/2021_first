#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ�����9*9�ھ���������ʽ
*/
void printfTable(int n);//������
void printfTable1(int n);//��������
void printfTable2(int n);//��������
void printfTable3(int n);//��������
void printfTable4(int n);//��������
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
			printf("%d*%d=%2d\t",j,i,i*j);//%2d���ƿ��Ϊ�����ַ������Ҷ���   -tΪtab����
		}
		printf("\n");
	}
}
void printfTable1(int n){
	int i,j;
	for (i = 1; i <= n; i++){
		for (j = 1; j <=i; j++){
			printf("%d*%d=%-2d\t",j,i,i*j);//-2d��ʾ������ҿ��ƿ��Ϊ2�ַ�
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
			while(j<i){//���б���С��ʱ��ʹ��tab��������������ͬʱj++ 
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