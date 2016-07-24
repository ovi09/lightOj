#include<iostream>

using namespace std;
int main()
{
    int testcase;

    while(cin>>testcase)
    {

        for(int i=0;i<testcase;i++)
        {
            int a[10]={0};
            int number;
            cin>>number;

            for(int i=1;i<=number;i++)
            {
                if(i<10)
                {
                    a[i]=a[i]+1;

                }
                else
                {
                    int number=i;
                    while(number>0)
                    {

                        int mod=number%10;
                        a[mod]=a[mod]+1;
                        number=number/10;

                    }
                }



            }
            cout<<a[0];
            for(int i=1;i<10;i++)
                    cout<<" "<<a[i];
            cout<<endl;


        }
    }
    return 0;
}
