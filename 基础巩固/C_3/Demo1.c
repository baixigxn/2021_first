#include<stdio.h>
#include<stdlib.h>
/*
	题目：输入三个整数x,y,z,请把这三个数由小到大输出
	题目分析：首先先找出这个三个数中的最小数，然后再比较另外两个数的大小就可以实现从小到大的排序
*/
void sort(int x,int y,int z);
main(){
	int x,y,z;
	printf("请输入三个整数以逗号隔开\n");
	scanf("%d,%d,%d",&x,&y,&z);
	sort(x,y,z);
	system("pause");
}
void sort(int x,int y,int z){
	if(x>y){
		int t=x;
		x=y;
		y=t;
	}
	if(x>z){
		int t =x;
		x=z;
		z=t;
	}
	if(y>z){
		int t=y;
		y=z;
		z=t;
	}
	printf("这三个数从小到大的顺序是%d,%d,%d",x,y,z);
}