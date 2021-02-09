# 题目：

将一个数组逆序输出

### 程序分析

1. 可以借用另一个数组，来存放当前数组的逆序
2. 也可以让当前数组的首元素和末尾元素互换，第二个元素和倒数第二个元素互换，依次进行

### 主要代码

```c
void fun1(int a[]);//借用另一个数组来逆序存放数组
void fun2(int a[]);//数组的第一个和最后一个数互换，第二个和倒数第二个互换，依次类推
int main(){
	int a[5]={1,2,3,4,5};
	int i;
	//fun1(a);
	fun2(a);
	system("pause");
	return 0;
}
void fun1(int a[]){
	int i;
	int j=4;;
	int b[5];
	for (i = 0; i < 5; i++)
	{
		b[j]=a[i];
		j--;
	}
	printf("第一个函数调用结果:\n");
	for (i = 0; i < 5; i++)
	{
		a[i]=b[i];
		printf("%d",a[i]);
	}

}
void fun2(int a[]){
	int i;
	int t;
	for (i = 0; i < 3; i++)
	{
		t=a[i];
		a[i]=a[4-i];
		a[4-i]=t;	
	}
	printf("第二个函数调用结果:\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d",a[i]);
	}
}
```



### 今日巩固

1. 在C语言中，函数的参数为数组应该怎么写，怎么调用该函数
2. 数组逆序输出的方法