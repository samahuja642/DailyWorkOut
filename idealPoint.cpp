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
        ll n,k;
        cin>>n>>k;
        unordered_map<int,int>count;
        bool same = false;
        for(ll i=0;i<n;i++){
            ll l,r;
            cin>>l>>r;
            if(l==k && r==k)same = true;
            if(l<=k && r>=k){
                for(ll j=l;j<=r;j++){
                    count[j]++;
                }
            }
        }
        bool greatest = true;
        for(int i=1;i<=50;i++){
            if(i!=k && count[k]<=count[i]){
                greatest = false;
                break;
            }
        }
        if(greatest)cout<<"YES"<<endl;
        else if(same)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}