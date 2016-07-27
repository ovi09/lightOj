#include<iostream>
using namespace std;


int sum(int n)
{
    unsigned long summation=0;
    while(n>0)
    {
        summation+=n%10;
        n=n/10;
       // cout<<n<<summation;
    }
    if(summation<10)
        return summation;
    else
        sum(summation);
}
int main()
{
    unsigned long n;
    while(cin>>n)
    {
        if(n==0) return 0;
        else
            cout<<sum(n)<<endl;
    }

    return 0;
}
