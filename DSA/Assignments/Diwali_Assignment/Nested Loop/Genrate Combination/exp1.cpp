#include<iostream>
using namespace std ;

int main()
{

    int num[]={1,2,3,4};


    for(int i=0 ; i<4;i++)
    {
         for(int j=0 ; j<4;j++)
        {
             for(int k =0 ; k<4;k++)
             {
                cout<<" "<<num[i]<<" "<<num[j]<<" " << num[k]<<endl;
        

             }
        

        }


    }
}