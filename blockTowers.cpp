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
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a+1,a+n);
        for(ll i=1;i<n;i++){
            if(a[i]>a[0]){a[0]=(((a[i]-a[0]+1)/2)+a[0]);}
        }
        cout<<a[0]<<endl;
    }
    return 0;
}