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
    vector<ll>river;
    river.push_back(1);
    for(ll i=1;i<=40;i++){
        river.push_back(river[river.size()-1]+i);
    }
    while(t--){
        ll k,n;
        cin>>k>>n;
        vector<ll>ans;
        set<ll>done;
        for(ll i=1;i<=n;i++)done.insert(i);
        ll index = 0;
        while(river[index]<=n){
            if(ans.size()==k)break;
            ans.push_back(river[index]);
            done.erase(river[index]);
            index++;
        }
        ll init = ans[ans.size()-1];
        while(ans.size()<k){
            init++;
            if(init>n)break;
            ans.push_back(init);
            done.erase(init);
        }
        while(ans.size()<k){
            ans.push_back(*(done.begin()));
            done.erase(*(done.begin()));
        }
        sort(ans.begin(),ans.end());
        for(ll i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}