#include <iostream>
using namespace std;
 
int main() 
{
    long long n;
    cin>>n;
    int d;
    int c=0;
   
      while(n>0){
      
      d = n%10;
      if(d==4 || d==7){
         c++;
      }
     n=n/10;
    }
     
    if(c==4||c==7){
      cout<<"YES";
    }
    else{
      cout<<"NO";
    }
    
    return 0;
}