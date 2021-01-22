# 题目：

求s=a+aa+aaa+aaaa+aa…a的值，其中a是一个数字，例如2+22+222+2222+22222（此时共有5个数相加），几个数相加由键盘控制



### 主要代码

```c
void fun(int a,int n){
	int count=1;
	long int sn=0,tn=0;
	printf("a=%d,n=%d",a,n);
	while (count<=n)
	{
		tn=tn+a;
		sn=sn+tn;
		a=a*10;
		count++;
	}
	printf("\na+aa+aaa+aaaa+aa…a=%ld\n",sn);
}
```



### 今日巩固

1. long int类型的定义时机
2. printf函数中long int 类型的打印