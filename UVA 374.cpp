#include<iostream>

using namespace std;

long long BigMod(long long base,long long power,long long mod)
{
    if(power==0) return 1;
    if(power%2==1)
    {
         long long part1=base%mod;
         long long part2=BigMod(base,power-1,mod);
         return (part1*part2)%mod;
    }
    if(power%2==0)
    {
        long long half=BigMod(base,power/2,mod);
        return (half*half)%mod;
    }

}

int main()
{
    long long base,power,mod;
    while(cin>>base>>power>>mod)
    {
        cout<<BigMod(base,power,mod)<<endl;
    }
}
