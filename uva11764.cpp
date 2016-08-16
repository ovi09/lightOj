#include <iostream>
using namespace std;

int main() {
    
    int test_number;
    cin>>test_number;
    
    for(int i=0;i<test_number;i++)
    {
        int input_number;
        int data,priv_data,max=0,min=0;
        
        cin>>input_number;
        for(int i=0;i<input_number;i++)
        {
            cin>>data;
            if(i==0) priv_data=data;
            else
            {
                if(priv_data>data) min++;
                else if(priv_data<data)max++;
                
                priv_data=data;
            }
        }
        
        cout<<"Case "<<i+1<<": "<<max<<" "<<min<<endl; 
    }
	// your code goes here
	return 0;
}
