#include<stdio.h>
char a='A';//ȫ�ֱ���
void msg(){//ȫ�ֺ���
	printf("Hello\n");
}
static int n;
void display(){
	n++;
	printf("%d\n",n);
}