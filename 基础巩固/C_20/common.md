# 题目：

利用递归方法求5!



### 程序分析

1. 找出规律5！=5*4！



### 主要代码

```c
int fun(int n){//递归函数求阶乘
    int s=1;
    if(n>1){
        s=n*f(n-1);
    }
    printf("%d的阶乘是：%d\n",n,s);
    return s;
}
int main(){
    fun(5);
    system("pause");
    return 0;
}
```



### 今日巩固

1. 在调用自己的时候主要判断条件
2. 这个函数使用的是int型的，本题要求的是求5的阶乘，那如果数值特别大，显然这个函数的返回值类型就不符合题意的要求