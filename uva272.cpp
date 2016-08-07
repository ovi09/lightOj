#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
     int coun=0;
    char ch[1000];
    while(gets(ch))
    {

         int len=strlen(ch);
         for(int i=0;i<len;i++)
         {

             if(ch[i]=='"')
             {
                 coun=coun+1;
                 if(coun%2==1)cout<<"``";
                 else cout<<"''";
             }
             else
                cout<<ch[i];


         }

         cout<<endl;
    }
    return 0;
}
