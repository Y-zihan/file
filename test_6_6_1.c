#include <stdio.h>
//int Add(int x,int y)
//{
//    int z;
//    z=x+y;
//    return z;
//}
////}
//int Max(int x,int y)
//{
//    if(x>y)
//    return x;
//    else
//    return y;
//}
//#define MAX(x,y)(x>y?x:y)
//int main()
//{
//    int a,b,c;
//    printf("����������������\n");
//    scanf("%d %d",&a,&b);
//    c=Add(a,b);
//    printf("��������֮��Ϊ%d\n",c);
//    c=Max(a,b);
//    printf("����֮�е�������Ϊ%d\n",c);
//    c=MAX(a,b);
//    printf("����֮�е�������Ϊ%d\n",c);
//    return 0;
//}
//int main()
//{
//    int a=1;
//    int b=2;
//    int c=2;
//    int d=3;
//    int sum;
//    sum=Add(a,b);
//    sum=Add(c,d);
//    printf("sum=%d\n",sum);
//    return 0;
//}
int main()
{
    int a=10;
    int *p=&a;
    *p=20;
    printf("a=%d\n",a);
    printf("%p\n",&a);
    printf("%d\n",sizeof(p));
    return 0;
}
