#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll n;
    cin>>n;
    int ans = 0;
    for(int i=1;i<=n;i++){
        ans ^= i;
    }
    for(int i=0;i<n-1;i++){
        int temp;
        cin>>temp;
        ans ^= temp;
    }
    cout<<ans<<endl;
    return 0;
}