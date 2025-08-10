/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 08 / 10 / 2025
   Time  : 22:29
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
int n,h[100005],dp[100000],k;
int  solve( int ind) {
    // code here 
    // base case
    if (ind == n-1)return 0;
    if (dp[ind]!=-1){
        return dp[ind];
    }

    // function body
    int cost = INT_MAX;
    for (int i=1;i<=k;++i){
        if (ind+i<n){
            cost=min(cost,solve(ind+i)+abs(h[ind]-h[ind+i]));
        }
    }
 return dp[ind]=cost;
}

int main() {
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>h[i];
    }
    for (int i=0;i<n;i++){
        dp[i]=-1;
    }
   
    int result = solve(0);
    cout<<result<<endl;

    
    // fast_io;
    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
    return 0;
}