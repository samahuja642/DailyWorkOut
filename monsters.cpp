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
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll count = 0;
        sort(a.begin(),a.end());
        ll ans = 0;
        for(ll i=0;i<n;i++){
            if(1==(a[i]-count)){
                count++;
                while(i<n && count>=a[i]){
                    i++;
                }
                i--;
            }
            else{
                ans+=(a[i]-count-1);
                count++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}