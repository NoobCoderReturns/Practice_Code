#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter The No."<<endl;
    cin>>n;
    int i,ln,ts,ms,s,mb,b;
    ts=1+(n-1)*2;
    i=1;    
    while(i<=n)
   {
        
      ln=1;
      while(ln<=i)
          
    {
          ms= 1+(ln-1)*2;
          mb= (ts-ms)/2;
          b=1;
          
          while(b<=mb)
          {
              cout<<" ";
              b=b+1;                
          }
          
          s=1;
          while(s<=ms)
          {   cout<<"*";
              s=s+1;   
          }   
          
          b=1;
          while(b<=mb)
          {
              cout<<" ";
              b=b+1;
          }
          
    }
      cout <<endl;
      ln=ln+1;
    
      i=i+1;
   }
    
    
    
    
}
