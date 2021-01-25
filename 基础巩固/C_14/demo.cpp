#include<iostream>
using namespace std;
/*
	题目：一球从100米高度自由落下，每次落地后反跳回原来高度的一半，再落下，求它在第10次落地时，共经过过少米？第10次反弹多高？
*/
void fun(float n,int m);//n为高度，m为第几次落地
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
	cout<<"共经过"<<sum<<"米"<<endl;
	cout<<"第"<<m<<"次反弹"<<height<<"米"<<endl;
}