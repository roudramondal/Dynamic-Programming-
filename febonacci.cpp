/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 07 / 12 / 2025
   Time  : 17:59
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

int dp[25];


int solve(int n) {
    // code here 
    //base case
    if (n==0)return 0;
    if (n==1)return 1;
    // check calculation or not
    if (dp[n]!=-1)
    {
     return dp[n];
    }
    // not calculation
    // function body
    int result = solve(n-1)+solve(n-2);
    dp[n]=result;
    return result;
}

int main() {
    // fast_io;
    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
   for (int i=0;i<25;i++) dp[i]=-1;
   cout<<solve(6)<<nl;
    return 0;
}