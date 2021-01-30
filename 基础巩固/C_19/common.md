# 题目：

求1+2!+3!+……+20!的和



### 程序分析

1. 求出阶乘
2. 求每项阶乘的和



### 主要代码

```c
long long int fun(int n){//求阶乘的函数
    long long int s;
    int i=1;
    while(i<=n){
        s=s*i;
        i++;
    }
    printf("%d的阶乘是：%lld",n,s);
    return s;
}
int main(){
    int i;
    long long int sum=0;
    for(i=1;i<=20;i++){
        sum+=fun(i);
    }
    printf("前20项的阶乘之和是：%lld",sum);
    system("pause");
    return 0;
}
```



### 今日巩固

1. 不自己写永远不知道问题在哪里，这两次拿到题之和我没有像原来那样去看别人的程序，而是自己开始写，虽然比较简单，但是这些基础对我而言，还是存在很多薄弱环节，需要我一点一点去积累
2. 这次为什么使用long long int类型，这就是我们需要考虑的第一个问题，在写函数的时候，就要考虑到函数的返回值类型成为了long long int 类型，与平时的区分开，否则结果就会千差万别