#include<iostream>
using namespace std;
/*
	��Ŀ��һ���100�׸߶��������£�ÿ����غ�����ԭ���߶ȵ�һ�룬�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�
*/
void fun(float n,int m);//nΪ�߶ȣ�mΪ�ڼ������
int main(){
	fun(100,10);
	system("pause");
	return 0;
}
void fun(float n,int m){
	float height=n;
	float sum=n;
	for (int i = 2; i <= m; i++)
	{
		height=height/2;
		sum=2*height+sum;
	}
	height=height/2;
	cout<<"������"<<sum<<"��"<<endl;
	cout<<"��"<<m<<"�η���"<<height<<"��"<<endl;
}