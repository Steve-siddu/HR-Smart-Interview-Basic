/*
author : steve
date: 20-12-2020
https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-transpose-matrix
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(m, vector<int> (n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[j][i];
        }
    }
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}
