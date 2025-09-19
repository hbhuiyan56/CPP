#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,i,j;
    int target ;
    int count = 0;
    cin >> n >> k;
    int scores[n];
    for ( i = 0; i < n; i++)
    {
        cin >> scores[i] ;
    }
    
        target = scores[k-1];
    for ( j = 0; j < n; j++)
    {
        if (scores[j]>= target && scores[j] > 0){
            count++;
        }
        }
    cout << count;
    return 0;
}
// input
// 8 5
// 10 9 8 7 7 7 5 5
// output
// 6