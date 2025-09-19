#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,i;
    int sc , target ;
    int count = 0;
    cin >> n >> k;
    for ( i = 1; i <= n; i++)
    {
        cin >> sc ;
        if (i = k){
             target = sc;
        }
        if (sc>= target){
            count++;
        }
    }
    cout << count;
}


// input
// 8 5
// 10 9 8 7 7 7 5 5
// output
// 6