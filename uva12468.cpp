#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a,b;
    while (cin>>a>>b) {
         if(a==-1 && b==-1)
             return 0;
         else
         {
             int res,res1;
             if(a<b){
                 res=b-a;
                 res1=100+a-b;
             }
             else
             {
                 res=a-b;
                 res1=100+b-a;
             }
             
             if(res<res1)cout<<res<<endl;
             else cout<<res1<<endl;
             
             
             
         }
    }
}