#include<iostream>
using namespace std;


int find_big(int a[],int len)
{
    int big=0;
    for(int i=0;i<len;i++)
    {
        if(big<a[i])
            big=a[i];
    }

    return big;
}

int main()
{
    int testcase;
    cin>>testcase;

    for(int i=1;i<=testcase;i++)
    {
        int total_sp;
        cin>>total_sp;
        int a[total_sp];
        for(int j=0;j<total_sp;j++)
            cin>>a[j];

        cout<<"Case "<<i<<": "<<find_big(a,total_sp)<<endl;
    }
    return 0;
}
