#include <bits/stdc++.h>
using namespace std;


int main() {
    
    int n;
    int s,v,t;
    int c = 0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>s>>v>>t;
        
        if((s+v+t)>=2){
            c++;
        }
        
    }

    cout <<c;

  return 0;
}