#include<iostream>

using namespace std;
int main()
{
    int test_case;
    cin>>test_case;
    for(int i=0;i<test_case;i++)
    {
        long long int sum,diff;
        cin>>sum>>diff;
        long long int a=0,b=0;
        if(diff>=sum || (sum+diff)%2!=0) cout<<"impossible"<<endl;
        else
        {
            a=(sum+diff)/2;
            b=a-diff;
            cout<<a<<" "<<b<<endl;

        }

    }
    return 0;

}
