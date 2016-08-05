#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

double count_avg_student_number(int a[],int n,double avg)
{
    int counter=0;

    for(int i=0;i<n;i++)
    {
        if(a[i]>avg)
            counter++;
    }
    double value=(double)(counter*100)/n;
    value = ( value * 1000.0 ) / 1000.0;
    return value;
}

int main()
{
    int test_case;
    cin>>test_case;
    for(int i=0;i<test_case;i++)
    {
        int total_number;
        cin>>total_number;
        int number[total_number];
        int sum=0;
        for(int j=0;j<total_number;j++)
        {
            cin>>number[j];
            sum+=number[j];
        }
        double avg=(double)(sum/total_number);

        double n=count_avg_student_number(number,total_number,avg);
        //cout << setprecision(3) << n << endl;
         printf("%.3lf%%\n",n);

    }
}
