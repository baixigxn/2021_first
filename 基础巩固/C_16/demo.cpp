#include<iostream>
using namespace std;
/*
	��Ŀ������ƹ����ӽ��б������������ˡ��׶�Ϊa,b,c���ˣ��Ҷ�Ϊx,y,z���ˡ�
	      �Գ�ǩ���������������������Ա����������������a˵������x�ȣ�c˵��
		  ����x,z�ȣ��������ҳ��������ֵ�����
	������������ѷ��֣����������ж�Ա����˳���ŵģ����ǿ����Դ���дѭ��
*/
int main(){
	int i,j,k;//�ֱ��Ӧa,b,c���˵Ķ���
	for(i='x';i<='z';i++){
		for (j = 'x'; j <= 'z'; j++){
			for (int k = 'x'; k <= 'z'; k++){
				if (i=='x'||j==i||k=='x'||k=='z'||j==k||i==k){
					continue;
				}
				/*cout<<"a��"<<i<<endl;
				cout<<"b��"<<j<<endl;
				cout<<"c��"<<k<<endl;*/
				printf("a��%c,b��%c,c��%c",i,j,k);
			}
		}
	}
	system("pause");
	return 0;
}