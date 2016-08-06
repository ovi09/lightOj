#include<iostream>

using namespace  std;



int number_of_empty_bottol(int n)
{
    int result=0;
    int diff=0;
    int total=0;
    while(n>1)
    {
         total+=n/3;
         result=n/3;
         diff=n-result*3;
         n=result+diff;
         if(n==2)
         {
              total++;
              break;
         }


    }

    return total;
}
int main()
{
    int number_full;
    while(cin>>number_full)
    {
        if(number_full==0) return 0;
        else
        {
            cout<<number_of_empty_bottol(number_full)<<endl;
        }
    }
}
