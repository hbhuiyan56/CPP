#include <bits/stdc++.h>
using namespace std;
int main(){
    string stones;
    int n;
    int count=0;
    cin>>n>>stones;
    // cout<<stones;
    for(int i=0;i<n;i++){
        if (stones[i]== stones[i+1]){
            count ++;
        }
        }
        cout<<count;
    }
/*3
RRG
output 1
5
RRRRR
output 4
*/