#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nline "\n"

typedef long long ll;
typedef unsigned long long ull;

ll gcd(ll a,ll b){return ((b==0)?a:gcd(b,a%b));}

void solve(){
    ll n;
    cin>>n;
    ll a[n];
    ll gcdall[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
        // if(i==0)gcdall[i] = a[i];
        // else gcdall[i] = gcd(gcdall[i-1],a[i]);
    }  
    // for(ll i=1;i<n;i++){
    //     if(gcdall[i]>(i+1)){
    //         cout<<"NO"<<endl;
    //         return;
    //     }
    // }
    // cout<<"YES"<<endl;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            if(i!=j && (gcd(a[i],a[j])==1||gcd(a[i],a[j])==2)){
                cout<<"YES"<<endl;
                return ;
            }
        }
    }
    cout<<"NO"<<endl;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}