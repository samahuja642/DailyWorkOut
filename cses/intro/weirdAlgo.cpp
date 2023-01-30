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
    while(n!=1){
        cout<<n<<" ";
        if(n&1)n = 3*n + 1;
        else n = n/2;
    }
    cout<<1<<endl;
    return 0;
}