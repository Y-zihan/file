#include  <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int a[ ] = {2, 5, 1, 9, 10, 0, 4, 8, 7, 6};
    int i,minx,j,t;
     int n=sizeof(a)/sizeof(a[0]);//�������Ԫ�ظ���
    for(i=0;i<n;i++)
    {
        minx=i;//��ʱ��Сֵ���±�
        for(j=i;j<n;j++)
            if(a[j]<a[minx])//���Ƚ��ź����
            minx=j;//��������΢��һ���
        t=a[i];a[i]=a[minx];a[minx]=t;//ÿһ��ֻ����һ��
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
