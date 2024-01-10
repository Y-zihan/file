#include  <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int a[ ] = {2, 5, 1, 9, 10, 0, 4, 8, 7, 6};
    int i,minx,j,t;
     int n=sizeof(a)/sizeof(a[0]);//求数组的元素个数
    for(i=0;i<n;i++)
    {
        minx=i;//此时最小值的下标
        for(j=i;j<n;j++)
            if(a[j]<a[minx])//不比较排好序的
            minx=j;//继续找稍微大一点的
        t=a[i];a[i]=a[minx];a[minx]=t;//每一趟只交换一次
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
