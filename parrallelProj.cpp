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
        ll w,d,h;
        cin>>w>>d>>h;
        ll a,b,f,g;
        cin>>a>>b>>f>>g;
        cout<<(h+min(abs(g-b)+min(a+f,2*w-a-f),abs(a-f)+min((b+g),(2*d-b-g))))<<endl;
    }
    return 0;
}