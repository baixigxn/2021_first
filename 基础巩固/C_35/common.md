# 题目：

输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组


### 程序分析

1. 遍历数组
2. 记录最大元素的位置，记录最小元素的位置，
3. 进行元素交换



### 主要代码

main.c

```c
int main(){
	int a[10];
	int i;
	printf("请输入数组的10个元素:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d",&a[i]);
	}
	int max=a[0];
	int min=a[0];
	int N_max=0,N_min=0;
	for (i = 1; i < 10; i++)
	{
		if (max<a[i])
		{
			max=a[i];
			N_max=i;//记录最大元素的位置
		}
		if (min>a[i])
		{
			min=a[i];
			N_min=i;//记录最小元素的位置
		}
	}
	int t=a[0];//交换最大的与第一个元素
	a[0]=a[N_max];
	a[N_max]=t;
	int s=a[9];//交换最小的与最后一个元素
	a[9]=a[N_min];
	a[N_min]=s;
	printf("最大的与第一个元素交换，最小的与最后一个元素交换后：\n");
	for (i = 0; i < 10; i++)
	{
		printf("%5d",a[i]);
	}
	system("pause");
	return 0;
}
```



### 今日巩固

1. 记录元素的位置，然后进行交换，巩固了数组的遍历与输出
2. 此题得注意如果刚好满足题意，是否会出现意外情况，我们可以不对代码作出处理，但是可能别的时候，就要考虑特殊情况，这个题我们这个代码亦可以满足情况

