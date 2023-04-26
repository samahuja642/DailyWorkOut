#include <bits/stdc++.h>

using namespace std;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define nline "\n"

typedef long long ll;
typedef unsigned long long ull;

// 1. Greedy

// ll maxDigit(ll n){
//     vector<ll>digits;
//     while(n){
//         digits.push_back(n%10);
//         n/=10;
//     }
//     sort(digits.begin(),digits.end());
//     return digits[digits.size()-1];
// }

// int main(){
//     // freopen("input.txt","r",stdin);
//     // freopen("output.txt","w",stdout);
//     fast
//     ll n;
//     cin>>n;
//     ll ans = 0;
//     while(n){
//         n-=maxDigit(n);
//         ans++;
//     }
//     cout<<ans<<endl;
//     return 0;
// }

// 2. DP

int main()
{
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll n;
    cin >> n;
    vector<ll> dp(n + 1);
    dp[0] = 0;
    for (ll i = 1; i <= n; i++)
    {
        dp[i] = INT_MAX;
        ll temp = i;
        while (temp)
        {
            if(temp%10!=0)dp[i] = min(dp[i],(1+dp[i-(temp%10)]));
            temp = temp / 10;
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}