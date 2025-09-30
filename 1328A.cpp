#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        int d=a/b;
        int e=d+1;
        int g=b*e;
        if (a%b!=0)
{
    if(a<b){
            cout<<(b-a)<<endl;
        }
        else if(a>b){
            cout<<(g-a)<<endl;
        }
}
else
{
    {cout<<0<<endl;}
}
    }
    return 0;
}


