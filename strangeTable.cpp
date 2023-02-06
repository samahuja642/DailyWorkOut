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
        ll n,m,k;
        cin>>n>>m>>k;
        ll x=k/n+(k%n==0?0:1),y=k%n==0?n:k%n; 
        cout<<(y-1)*m + x<<endl;
    }
    return 0;
}