# 题目：

利用递归函数调用方式，将所有输入的5个字符，以相反的顺序打印出来



### 程序分析

1. 字符的输入与输出使用的是getchar()和putchar()函数
2. 当字符输入结束之后，调用自己本身，逐个输出



### 主要代码

```c
void fun(int n){//递归函数
    char c;
    if(n<=1){//当n小于等于1的时候开始输出
        c=getchar();
        putchar(c);
    }else{
        c=getchar();
        fun(n-1);
        putchar(c);
    }
}
int main(){
    fun(5);
    system("pause");
    return 0;
}
```



### 今日巩固

1. 怎么使用getchar和putchar函数
2. 函数自己调用自己怎么逆序数出字符串