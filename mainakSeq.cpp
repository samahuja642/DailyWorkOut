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
        ll n,m;
        cin>>n>>m;
        if(m%n){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(ll i=0;i<n;i++){
                cout<<m/n<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}