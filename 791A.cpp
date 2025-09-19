#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,b;
    cin>>l>>b;
    int year;
    for (int i = 1; i <= INT64_MAX; i++)
    {
        l=3*l;
        b=2*b;
        if(l>b){
            year = i;
            break;
        }
    }
    cout<< year;
    return 0;
}