#include <iostream>
using namespace std;


bool isplanidrom(long n)
{
    
    int a[100];
    int i=0;
    while(n>0)
    {
        a[i]=n%10;
        n=n/10;
        i++;
        
    }
    int flag=0;
    int j,k;
    
    for(j=0,k=i-1;j<=i/2;j++,k--)
    
    {
       
        if(a[j]!=a[k])
        {
            flag=1;
            break;
        }
    }
    
    if(flag==1) return false;
    else return true;
}

bool isPrime(long n)
{
    int flag=0;
    long int i=0;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1) return false;
    else return true;
}

int main() {
    // your code goes here
    
    
    long long int n;
    long long int res;
    while(cin>>n)
    {
         res=n*2;
        if(isPrime(n)==1 &&  isplanidrom(n)==1)
        {
             
           
            cout<<res<<endl;
            break;
        
        }
        else
        {
            cout<<res<<endl;
        }
    }
    
    
    
    return 0;
}
