#include<bits/stdc++.h>
using namespace std;
int main(){
    string username;
    int n;
    int count =0;
    cin>>username;
    int l = username.length();
    for (int i = 0 ; i < l ; i++)
    {
        for (int j = i +1; j < l; j++)
        {
            if (username[i] == username[j]){
                count ++;
                break;
                /*If a duplicate is found, count is incremented
                 by one, and the break immediately stops the inner loop.*/
            }
        }
    }
    // cout << count;
    n = l - count;
    if (n % 2 == 0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}