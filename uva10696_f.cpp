#include<iostream>

using namespace std;

int f91(unsigned long n)
{
    if(n>=101) return n-10;
    else
        f91(f91(n+11));

}


int main()
{
    unsigned long testcase;
    while(cin>>testcase)
    {
        if(testcase==0) return 0;
        else
          cout<<"f91("<<testcase<<") = "<<f91(testcase)<<endl;
    }
}

