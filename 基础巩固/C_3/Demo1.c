#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ��������������x,y,z,�������������С�������
	��Ŀ�������������ҳ�����������е���С����Ȼ���ٱȽ������������Ĵ�С�Ϳ���ʵ�ִ�С���������
*/
void sort(int x,int y,int z);
main(){
	int x,y,z;
	printf("���������������Զ��Ÿ���\n");
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
	printf("����������С�����˳����%d,%d,%d",x,y,z);
}