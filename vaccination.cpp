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
        ll n,k,d,w;
        cin>>n>>k>>d>>w;
        ll aTime[n];
        for(ll i=0;i<n;i++){
            cin>>aTime[i];
        }
        ll ans=1;
        bool start = 1;
        ll time = 0;
        ll doses = k;
        for(ll i=0;i<n;i++){
            if(start){
                time = aTime[i]+w;
                start=0;
                doses = k-1;
            }
            else{
                if(((time+d)<aTime[i]) || !doses){
                    start = 1;
                    i--;
                    ans++;
                }
                else{
                    doses--;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}   