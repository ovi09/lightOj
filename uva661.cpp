#include<iostream>

using namespace std;
int main()
{
    int machine_number,operation,capacity;
    int sequen=1;

    while(cin>>machine_number>>operation>>capacity)
    {
        int maxx=0;

        int main_flag=0;
        if(machine_number==0) return 0;

        int cap[machine_number];
        int oper[operation];
        for(int i=1;i<=machine_number;i++)
            cin>>cap[i];
            int get_id;



        int trak[machine_number]={0};
        int res=0;
        int dummy[operation];
        for(int j=0;j<operation;j++)
        {
            cin>>dummy[j];
        }
        for(int j=0;j<operation;j++)
        {
            int flag=0;
           // cin>>get_id;
           get_id=dummy[j];

                if(trak[get_id]==1)
                {

                   trak[get_id]=0;

              //   cout<<"found on"<<res-cap[get_id]<<"funck"<<maxx<<endl;
                   res-=cap[get_id];
                   flag=1;
                }


            if(flag==0)
            {
                 res+=cap[get_id];
                 if(maxx<res)
                    maxx=res;

                 if(res>capacity)
                 {
                     cout<<"Sequence "<<sequen<<endl;
                     cout<<"Fuse was blown."<<endl<<endl;
                     main_flag=1;
                     j=operation;
                     break;


                 }

                 trak[get_id]=1;


            }


        }


     if(main_flag==0)
     {



      cout<<"Sequence "<<sequen<<endl;
      cout<<"Fuse was not blown."<<endl;
      cout<<"Maximal power consumption was "<<maxx<<" amperes."<<endl<<endl;
     }


        sequen++;


    }
    return 0;
}
