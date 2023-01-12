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
        ll x,y;
        cin>>x>>y;
        int i=1;
        if(x>y){
            swap(x,y);
        }
        if(x==y){
            cout<<x<<endl;
        }
        else{
            while(1){
                ll ans = y*i-x;
                if((ans+y)%x==0){
                    cout<<ans<<endl;
                    break;
                }
                i++;
            }
        }
    }
    return 0;
}