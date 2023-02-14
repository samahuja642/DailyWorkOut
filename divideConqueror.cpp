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
        ll sum = 0;
        // ll mini = INT_MAX;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            // mini = min(a[i],mini);
        }
        if(sum&1){
            ll operations = 1;
            bool ans = false;
            while(!ans){
                for(ll i=0;i<n;i++){
                    if(a[i]&1){
                        a[i] /= 2;
                        if((a[i]&1)==0){
                            ans = true;
                        }
                    }
                    else{
                        a[i] /= 2;
                        if(a[i]&1){
                            ans = true;
                        }
                    }
                }
                if(!ans)operations++;
            }
            cout<<operations<<endl;
        }
        else{
            cout<<0<<endl;
        }
        // if(sum&1){
        //     if(mini&1){
        //         cout<<ll(log(mini)/log(2))+1<<endl;
        //     }
        //     else{
        //         cout<<ll(log(mini)/log(2))<<endl;
        //     }
        // }
        // else{
        //     cout<<0<<endl;
        // }
    }
    return 0;
}