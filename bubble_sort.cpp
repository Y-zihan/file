#include  <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int a[ ] = {2, 5, 1, 9, 10, 0, 4, 8, 7, 6};
    int i,j,t;
    int n=sizeof(a)/sizeof(a[0]);//�������Ԫ�ظ���
    for( i=0;i<n-1;i++)
        for( j=0;j<n-i-1;j++)
    {
        if(a[j]>a[j+1])//ð������ע���������õĵڶ���ѭ�����±�
        {
            t=a[j];a[j]=a[j+1];a[j+1]=t;
        }

    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
