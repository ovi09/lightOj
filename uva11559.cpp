#include<iostream>

using namespace std;
int main()
{
    int people,hotel,budget,week;
    while(cin>>people>>budget>>hotel>>week)
    {
        int summation=999999999;

        for(int j=0;j<hotel;j++)
        {


                int hotel_per_rant;
                cin>>hotel_per_rant;
                int hotel_week_vacancy[week];
                for(int i=0;i<week;i++){
                    cin>>hotel_week_vacancy[i];
                    if(people<=hotel_week_vacancy[i] )
                    {
                        //&&(hotel_per_rant*week)<=budget && summation>(hotel_per_rant*week
                   // cout<<hotel_week_vacancy[i]<<"-"<<hotel_per_rant<<"-"<<hotel_week_vacancy[i]<<endl;
                    if((hotel_per_rant*people<budget  && summation>hotel_per_rant*people  ))

                       summation=hotel_per_rant*people;
                    }

                }



        }
        if(summation==999999999)
         cout<<"stay home"<<endl;
         else
            cout<<summation<<endl;


        }




}
