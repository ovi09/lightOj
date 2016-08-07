#include<iostream>

using namespace std;
int main()
{
    int test_case;
    int empty_total, road,requir,total=0;
    cin>>test_case;
    for(int i=0;i<test_case;i++)
    {


         cin>>empty_total>>road>>requir;
         total=empty_total+road;

        int res=0,result=0;
        while(total>=requir)
        {

            res=total/requir;
            result+=res;
            total=res+(total-res*requir);

        }
        cout<<result<<endl;

    }
}
