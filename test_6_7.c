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
//    printf("%lf\n",d);//pd���洢�����d�ĵ�ַ��
//    printf("%lf\n",*pd);//*pd��ʾͨ��&d(d�ĵ�ַ���������ҵ�d���������d��*pd�ȼۣ�
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
//        struct Book b1={"c���Գ������",55};
//        printf("������%s\n",b1.name);
//        printf("�۸�%d\n",b1.price);
//        b1.price=15;
//        printf("�޸ĺ�ļ۸�Ϊ%d\n",b1.price);
//        return 0;
//    }
{
    struct Book b1={"c���Գ������",55};
    struct Book* pd=&b1;
    printf("%s\n",(*pd).name);
    printf("%d\n",(*pd).price);
    printf("%s\n",pd->name);
    printf("%d\n",pd->price);
//    bl.name=15;nameΪһ�����飬����ֱ�Ӹ�ֵ
    strcpy(b1.name,"c++");//strcpy->string copy,�ַ�����������Ҫʹ������Ҫ����<string.h>
    printf("%s\n",b1.name);
    return 0;
}
