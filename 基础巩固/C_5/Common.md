## 题目

古典问题，有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后又生一对兔子，假如兔子都不死，问每个月的兔子总数是多少？

### 算法分析

兔子的对数符合斐波那契数列

### 斐波那契数列

（Fibonacci sequence），又称为“[兔子数列](https://baike.baidu.com/item/兔子数列/6849441)”，指的是这样一个数列：1、1、2、3、5、8、13、21、34、……在数学上，斐波纳契数列以如下被以[递推](https://baike.baidu.com/item/递推/1740695)的方法定义：F(1)=1，F(2)=1, F(n)=F(n-1)+F(n-2)（n>=3，n∈N*）。就是前两个数的和等于第三个数的值。

兔子繁殖树状图https://stage.geogebra.org/m/xyut7cwm

![image-20210116143451932](C:\Users\lenovo\AppData\Roaming\Typora\typora-user-images\image-20210116143451932.png)

### 非递归方式

```c
int fun(int n){
    int n1,n2;
    n1=n2=1;
    for(int i=1;i<=n;i++){
        printf("%d\t",n1);
        printf("%d\t",n2);
        n1=n1+n2;
        n2=n1+n2;
    }
    return 0;
}
```



### 递归方式

```c
int fun(int n){
    if(n==1 || n=2){
        return 1;
    }else{
        return fun(n-1)+fun(n-2);
    }
}
```



### 数组方式

```c
int fun(){
    int a[20]={0};
    a[0]=a[1]=1;
    for(int i=2;i<20;i++){
        a[i]=a[i-1]+a[i-2];
    }
    for(int i=0;i<20;i++){
        return a[i];
    }
    return 0;
}
```

### 今日巩固

1. 对斐波那契数列有了更深刻的理解，在生活中，很多事物的产生不是对称的，而是像斐波那契数列这样的规律
2. 递归有时候运算起来效率不是很高，可以结合数组的形式来优化算法

