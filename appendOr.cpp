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
        ll n,y;
        cin>>n>>y;
        vector<ll>arr(n);
        ll varOr = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            varOr |= arr[i];
        }
        if((varOr|y) > y){
            cout<<-1<<endl;
        }
        else{
            cout<<(y-varOr)<<endl;
        }
    }
    return 0;
}