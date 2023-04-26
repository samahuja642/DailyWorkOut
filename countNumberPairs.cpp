#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nline "\n"

typedef long long ll;
typedef unsigned long long ull;

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        unordered_map<char,ll>count;
        for(ll i=0;i<s.length();i++)count[s[i]]++;
        vector<pair<ll,ll>>values;
        for(ll i=0;i<26;i++){
            values.push_back({count['a'+i],count['A'+i]});
            cout<<count['a'+i]<<" "<<count['A'+i]<<endl;
        }
        sort(values.begin(),values.end());
        ll ans = 1;
        for(ll i=values.size()-1;i>=0;i--){
            ll constant = (values[i].first+values[i].second)/2;
            if((abs(constant-values[i].first)+abs(constant-values[i].second)) <= k){
                k-=(abs(constant-values[i].first)+abs(constant-values[i].second));
                ans += pow(constant,2);
            }
            else{
                
            }
        }
    }
    return 0;
}