#include<iostream>
using namespace std;
/*
	��Ŀ��һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ��������������6=1+2+3���ҳ�1000���ڵ���������
*/
void fun(int n);
int main(){
	int n=1000;
	fun(n);
	system("pause");
}
void fun(int n){
	cout<<n<<"���ڵ�������"<<endl;
	for (int i = 1; i < n+1; i++)
	{
		int sum=0;
		for (int j = 1; j < i/2+1; j++)
		{
			if ((i%j)==0)
			{
				sum+=j;
				if (sum==i)
				{
					cout<<i<<" "<<endl;
				}
			}
		}
	}
}