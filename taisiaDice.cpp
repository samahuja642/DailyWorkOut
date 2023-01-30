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
        ll n,s,r;
        cin>>n>>s>>r;
        ll rep = r/(n-1);
        ll extraRep = r%(n-1);
        ll rest = n -1 - extraRep;
        while(extraRep--){
            cout<<rep+1<<" ";
        }
        while(rest--){
            cout<<rep<<" ";
        }
        cout<<s-r<<endl;
    }
    return 0;
}