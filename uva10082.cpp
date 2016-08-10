#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
int main()
{
    string keyboard = "`1234567890-=@QWERTYUIOP[]\\@ASDFGHJKL;'@ZXCVBNM,./";
    char ch[1000];
    while(gets(ch))
    {
        for(int i=0;i<strlen(ch);i++)
        {
              if(ch[i]==' ')
                    cout<<" ";
        else
            for(int j=0;j<keyboard.length();j++)
            {
                if(ch[i]==keyboard[j])
                {
                    if(keyboard[j-1]=='@')
                    cout<<keyboard[j];
                    else
                        cout<<keyboard[j-1];
                }




            }
        }
            cout<<endl;

    }

    return 0;
}

