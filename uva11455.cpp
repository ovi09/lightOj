#include<iostream>
using namespace std;

int main()
{

    int test_case;
     cin>>test_case;
     int a,b,c,d;

     for(int i=0;i<test_case;i++)
     {
         cin>>a>>b>>c>>d;
         if(a==0||b==0||c==0||d==0)
         {
             cout<<"banana"<<endl;
         }

         else if(a==b && c==d && b==c)
         {
              cout<<"square"<<endl;
         }
         else if((a==b && c==d && b!=c)||(a==d && c==b && a!=c)||(a==c && b==d))
         {

             cout<<"rectangle"<<endl;
         }
         else if(a+b+c>d && a+c+d>b && b+c+d>a && c+d+a>b && a+b+d>c)
         {
             cout<<"quadrangle"<<endl;
         }
         else
         {
             cout<<"banana"<<endl;
         }
     }
    return 0;
}
