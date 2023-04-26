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
        ll a,b;
        cin>>a>>b;
        ll same = min(abs(a),abs(b));
        ll diff = (max(abs(a),abs(b))-same);
        cout<<(2*same + ((diff)?2*diff-1:0))<<endl;
    }
    return 0;
}