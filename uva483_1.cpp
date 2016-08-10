#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

string reverse_word(string ch)
{
    string pro="";


    for(int i=ch.length()-1;i>=0;i--)
    {
        pro+=ch[i];

    }

    return pro;
}
int main()
{
    char ch[1000];

    while(gets(ch))
    {


    string pro="";
    for(int i=0;i<strlen(ch);i++)
    {
        if(ch[i]==' ')
        {


         //   cout<<reverse_word(pro);
           cout<<reverse_word(pro);
           pro="";
           cout<<" ";

        }

        else
        {

            pro+=ch[i];
            if(i==strlen(ch)-1)
        {
           cout<<reverse_word(pro);
           pro="";

        }
        }

    }
    cout<<endl;
    }
}

