#include<stdio.h>
#include<stdlib.h>
/*
	��Ŀ����������������m��n���������Լ������С������
*/
void fun1(int m,int n);//շת�����
void fun2(int m,int n);//������
void main(){
	int a,b;
	printf("�������������������ö��Ÿ���\n");
	scanf("%d,%d",&a,&b);
	fun1(a,b);
	fun2(a,b);
	system("pause");
}
void fun1(int m,int n){
	int a,b;
	if(m<n){//�Ƚ��ϴ�����ַŵ�m��
        int t=m;
        m=n;
        n=t;
    }
    a=m;
    b=n;
    while(b != 0){//����շת�������ֱ������b��0
        int c=a%b;
        a=b;
        b=c;
    }
    printf("���Լ���ǣ�%d\n",a);
    printf("��С�������ǣ�%d\n",m*n/a);
}
void fun2(int m,int n){
	int x=1,y;//���Լ��x����Ϊ1,��С������y
    int min,max;
    int i;
    
    min=m>n?n:m;
    max=m>n?m:n;
    
    if(max%min==0){//�������Ǳ�����ϵ
        printf("���Լ����%d\n��С��������%d\n",min,max);
    } else{//���ɱ���
		//Ѱ�����Լ��
        for(i=1;i<=min;i++){//��1�ҵ�min
            if(max%i==0 && min%i==0) x=i;
        }
        while(max%m!=0 || max%n!=0){//����һ�����ܱ�����ʱ������������
            max++;
        }
        y=max;
        printf("���Լ����%d\n��С��������%d\n",x,y);
    }
}