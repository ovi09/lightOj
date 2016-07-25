#include<iostream>

using namespace std;
int main()
{
    int test_case;
    int to,from;
    while(cin>>test_case)
    {
        for(int k=1;k<=test_case;k++)
        {
        int sum=0;
        cin>>to>>from;
        for(int i=to;i<=from;i++)\
        {
            if(i&1==1) sum+=i;
        }

        cout<<"Case "<<k<<": "<<sum<<endl;
        }
    }
}
