#include <stdio.h>
//int main()
////{
//    int a=10;
//    int* p=&a;
//    *p=20;
//    printf("a=%d\n",a);
//    return 0;
//}
//{
//    double d=3.14;
//    double*pd=&d;
//    *pd=5.5;
//    printf("%lf\n",d);//pd里面储存的是d的地址；
//    printf("%lf\n",*pd);//*pd表示通过&d(d的地址），我们找到d这个变量；d与*pd等价；
//    return 0;
//}
    #include <string.h>
    struct Book
    {
        char name[20];
        short price;
    };
    int main()
//    {
//        struct Book b1={"c语言程序设计",55};
//        printf("书名：%s\n",b1.name);
//        printf("价格：%d\n",b1.price);
//        b1.price=15;
//        printf("修改后的价格为%d\n",b1.price);
//        return 0;
//    }
{
    struct Book b1={"c语言程序设计",55};
    struct Book* pd=&b1;
    printf("%s\n",(*pd).name);
    printf("%d\n",(*pd).price);
    printf("%s\n",pd->name);
    printf("%d\n",pd->price);
//    bl.name=15;name为一个数组，不能直接赋值
    strcpy(b1.name,"c++");//strcpy->string copy,字符串拷贝，若要使用则需要调用<string.h>
    printf("%s\n",b1.name);
    return 0;
}
