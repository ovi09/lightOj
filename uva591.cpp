#include<iostream>
using namespace std;

int main()
{
    int test_case;
    int counter=1;
    while(cin>>test_case)
    {
        if(test_case==0) return 0;
        else
        {
            int arr[test_case];
            int avg=0;
            for(int i=0;i<test_case;i++)
            {
                cin>>arr[i];
                avg+=arr[i];
            }

            avg=avg/test_case;
            int res=0;

            for(int i=0;i<test_case;i++)
            {
                if(arr[i]>avg)
                    res+=(arr[i]-avg);
            }


            cout<<"Set #"<<counter<<endl<<"The minimum number of moves is "<<res<<"."<<endl<<endl;
            counter++;



        }
    }
}
