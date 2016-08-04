#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a==0 ||b==0) return 0;
        else
        {
            int counter=0;
            for(int i=a;i<=b;i++)
                {
                   float in= (int)sqrt(i)*(int)sqrt(i);
                   //cout<<in<<endl;
                    if(in==i)

                    {
                        counter++;

                    }
                }

                cout<<counter<<endl;
        }
    }
}
