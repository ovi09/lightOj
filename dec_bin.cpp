#include<iostream>
using namespace std;



void bin(int n)
{
    if(n==0) return;

    else
    {

        bin(n/2);
        cout<<n%2;
    }


}
int main()
{
    int number;

    while(cin>>number)
    {
        bin(number);
    }
}
