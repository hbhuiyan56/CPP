#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    int p=0;
    int q;
    cin>>k>>n>>w;
    for (int i = 1; i <= w; i++)
    {
        p = k*i+p;
    }
    if(p>n){
         q = p - n;
    }
    else{
        q=0;
    }
    cout<<q;
    return 0;
}
//input 3 17 4
