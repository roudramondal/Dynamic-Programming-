/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 07 / 12 / 2025
   Time  : 16:21
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
int n,arr[15];
vector<int>currentsubset;

void solve(int idx) {
    // code here 
    //base case
    if (idx==n)
    {
       for (auto x:currentsubset)
       {
        cout<<x<<" ";
       } 
       cout<<endl;
       return ;
    }
    // function body
    // don't take arr[ind]
    solve(idx+1);
    // take arr[ind]
    currentsubset.push_back(arr[idx]);
    solve(idx+1);
    currentsubset.pop_back();

}

int main() {
    // fast_io;
    // int t;
    // cin >> t;

    // while (t--) {
    //     // cin>>n;
    //     // for (int i=0;i<n;i++)cin>>arr[i];
    //     solve();
    // }
    cin>>n;
    for (int i=0;i<n;i++) cin>>arr[i];
    solve(0);

    return 0;
}