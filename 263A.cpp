#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    int targetr, targetc;
    int dr,dc;
    int matrix[5][5];
    for (int i = 0; i <5 ; i++)
    {
        for (int j =0 ; j<5; j++)
        {
            cin>>matrix[i][j];
            if (matrix[i][j] == 1){
        targetr = i;
        targetc = j;
    }
        }
    }
    // cout<<targetr<<targetc<<endl;
    if (targetr > 2)
    {
        dr = targetr - 2;
    }
    else if(targetr<2){
        dr = 2 - targetr;
    }
    else
    {
        dr = 0;
    }
    if (targetc > 2)
    {
        dc = targetc - 2;
    }
    else if(targetc<2){
        dc = 2 - targetc;
    }
    else
    {
        dc = 0;
    }
    int distance = dr + dc;
    cout << distance;
}
/*
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0

*/