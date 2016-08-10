#include<iostream>
#include<cstring>

using namespace std;
int main()
{
    string phone;
   while(cin>>phone)
   {


    for(int i=0;i<phone.length();i++)
    {
        if(phone[i]=='-')cout<<phone[i];
        else  if(phone[i]>='A' && phone[i]<='C')cout<<"2";
        else if(phone[i]>='D' && phone[i]<='F')cout<<"3";
        else  if(phone[i]>='G' && phone[i]<='I')cout<<"4";
        else if(phone[i]>='J' && phone[i]<='L')cout<<"5";
        else if(phone[i]>='M' && phone[i]<='O')cout<<"6";
        else if(phone[i]>='P' && phone[i]<='S')cout<<"7";
        else if(phone[i]>='T' && phone[i]<='V')cout<<"8";
        else if(phone[i]>='W' && phone[i]<='Z')cout<<"9";
        else
        cout<<phone[i];

    }
    cout<<endl;
   }

    return 0;

}
