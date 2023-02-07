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
        ll x,n;
        cin>>x>>n;
        ll steps = n - (n%4) + 1;
        while(steps<=n){
            if(x&1)x+=steps;
            else x-=steps;
            steps++;
        }
        cout<<x<<endl;
    }
    return 0;
}