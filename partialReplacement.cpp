#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll t;
    cin>>t;
    while(t--){
        ll k,n;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<pair<ll,ll>>count;
        for(ll i=0;i<s.length();i++){
            if(s[i]=='*')count.push_back({i,0});
        }
        ll maxValid = 0;
        ll prev = 0;
        ll changes = 0;
        for(ll i=0;i<count.size();i++){
            if(i==0 || i==count.size()-1){
                changes++;
                count[i].second = 1;
                prev = i;
            }
            else if(count[i].first-count[prev].first<=k){
                while(i<count.size() && ((count[i].first-count[prev].first)<=k)){
                    // cout<<(count[i].first-count[prev].first)<<endl;
                    maxValid = i;
                    // cout<<"valid "<<maxValid<<endl;
                    i++;
                }
                // cout<<"heere"<<endl;
                i--;
                changes++;
                // cout<<changes<<endl;
                // cout<<maxValid<<endl;
                count[maxValid].second = 1;
        // cout<<count[2].first<<" "<<count[2].second<<endl;
                prev = maxValid;
                // cout<<prev<<endl;
            }
        }
        // cout<<count[2].first<<" "<<count[2].second<<endl;
        cout<<changes<<endl;
    }
    return 0;
}