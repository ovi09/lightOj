#include<iostream>

using namespace std;
int main()
{
    int testcase;
    while(cin>>testcase)
    {
        for(int i=0;i<testcase;i++)
        {
            int number;
            cin>>number;
            long result= ((((number*567)/9+7492)*235)/47)-498;
            result=result/10;
            int k=result%10;
            if(k<0)k=(-1)*k;
           cout<<k<<endl;
        }
    }
}
