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
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        string colors;
        cin>>colors;
        bool ans = true;
        vector<ll>blues,reds;
        for(ll i=0;i<n;i++){
            if(colors[i]=='B')blues.push_back(a[i]);
            else reds.push_back(a[i]);
        }
        sort(blues.begin(),blues.end());
        sort(reds.begin(),reds.end());
        ll val=1;
        for(ll i=0;i<blues.size();i++){
            if(val<=blues[i]){
                // cout<<"ValB "<<val<<endl;
                val++;
            }
            else{
                ans = false;
                break;
            }
        }
        if(!ans){
            cout<<"NO"<<endl;
        }
        else{
            for(ll i=0;i<reds.size();i++){
                if(val>=reds[i]){
                    // cout<<"Val "<<val<<endl;
                    val++;
                }
                else{
                    ans = false;
                    break;
                }
            }
            if(ans){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}