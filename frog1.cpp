/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 08 / 10 / 2025
   Time  : 19:36
   Problem Link: 
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define YES cout << 'YES\n'
#define Yes cout << 'Yes\n'
#define NO cout << 'NO\n'
#define No cout << 'No\n'
#define ld long double
#define pb push_back
#define po pop_back
#define all(v) v.begin(), v.end()
#define pii pair<int,int>
#define pll pair<<ll ,ll>

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
int n,h[100005],dp[100005];

int  solve(int ind) {
    // code here 
    //base case 
     if(ind==n-1)return 0;
     if (dp[ind]!=-1){
        return dp[ind];
    }
    // function body
    // ind+1
    int res1=abs(h[ind]-h[ind+1])+solve(ind+1);
    
    // ind+2
    int res2=2000000000;
    if (ind+2<n){
        res2=abs(h[ind]-h[ind+2])+solve(ind+2);
    }
    int result=min(res1,res2);
    return  dp[ind]=result;
}

int main() {
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>h[i];
    }
    for (int i=0;i<n+2;i++){
        dp[i]=-1;
    }
    int result=solve(0);
    cout<<result;

    // fast_io;
    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
    return 0;
}