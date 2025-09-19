#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    int n;
    
    string s;
    int x=0;
    cin>>n;
    for (int i =0; i < n; i++)
    {
        cin >>s;
        if (s == "x++" || s == "++x" || s == "X++" || s == "++X")
        {
            x++;
            
        }
        else if (s == "x--" || s == "--x" || s == "X--" || s == "--X")
        {
            x--;
            
        }
        
        
    }
    
    cout<<x;
  return 0;
}