#include<iostream>

using namespace std;
bool isPrime(int n)
{
    int flag=0;
    if(n%2==0) return false;
    for(int i=3;i*i<=n;i=i+2)
    {
        if(n%i==0) {

          flag=1;
          break;
        }



    }

    if(flag==0) return true;
    else
        return false;
}
int main()
{


    int number;
    while(cin>>number)
    {
        if(number==0) return 0;
        for(int i=3;i<number;i++)
        {

            if(isPrime(i)==true&&isPrime(number-i)==true)
            {
                 cout<<number<<" = "<<i<<" + "<<number-i<<endl;
                 break;
            }

        }
    }
    return 0;
}
