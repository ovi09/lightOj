#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;
int getValue(int a,int b,int c);

int main()
{
    int testcase;
    while(cin>>testcase)
    {
        int i;
        int a,b,c;
        for(i=0;i<testcase;i++)
        {
            cin>>a>>b>>c;
            cout<<"Case "<<i+1<<": "<<getValue(a,b,c)<<endl;

        }

    }

    return 0;

}

int getValue(int a,int b,int c)
{
    int myints[] = {a,b,c};
    vector<int> myvector (myints, myints+3);
    sort (myvector.begin(), myvector.begin()+3);
    return myvector[1];


}

