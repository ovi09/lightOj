#include<iostream>

using namespace std;
int main()
{
    int test_case,num1,num2;
    while(cin>>test_case)
    {
        for(int i=0;i<test_case;i++)
        {
            cin>>num1>>num2;
            if(num1>num2) cout<<">"<<endl;
            else if(num1<num2) cout<<"<"<<endl;
            else cout<<"="<<endl;
        }
    }
    return 0;
}
