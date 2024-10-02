
//HOLLOW SQUARE
#include<iostream>
using namespace std;
#include<stdlib.h>
int main()
{int length;
 cout<<"Enter a number to print from 1 to 20";
 cin>>length;
 
 if(length<1 || length>20)
   {cout<<"Enter valid length";
    exit(0);
    }
    for(int i=0;i<length;i++)
    {for(int j=0;j<length;j++)
        {if(j==0 || j==length-1 || i==0 || i==length-1)
          {cout<<"*";}
        else
           {cout<<" ";}
        }
        cout<<"\n";
    }
}
