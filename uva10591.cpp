#include<iostream>

using namespace std;


void find_happy(int id,int n,int number)
{
    if(n==1) cout<<"Case #"<<id<<": "<<number<<" is a Happy number."<<endl;

    else
    {
        long long int   sum=0;
        while(n>0)
        {
           long long int i=n%10;
            sum+=i*i;
            n=n/10;




        }


         if(sum==number) cout<<"Case #"<<id<<": "<<number<<" is an Unhappy number."<<endl;

         else
         {


            if(sum<=9 && sum!=1)cout<<"Case #"<<id<<": "<<number<<" is an Unhappy number."<<endl;
             else
             find_happy(id,sum,number);
         }

    }
}

int main()
{
   long long int number;
   long long int test_case;
    cin>>number;
   long long int i=1;
    while(i<=number)
    {
    long long int get_num;
       cin>>get_num;
       find_happy(i,get_num,get_num);
      i++;
    }
}
