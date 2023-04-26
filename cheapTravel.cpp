#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    cout<<min((n-n%m)*a,(n/m)*b)+((n%m)*a)<<endl;
    return 0;
}