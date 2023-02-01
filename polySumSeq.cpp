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
        ll a[7];
        for(int i=0;i<7;i++){
            cin>>a[i];
        }
        cout<<a[0]<<" "<<a[1]<<" "<<a[6]-a[1]-a[0]<<endl;
    }
    return 0;
}