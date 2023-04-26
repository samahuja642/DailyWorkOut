#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nline "\n"

typedef long long ll;
typedef unsigned long long ull;

ll gcd(ll a,ll b){return ((b==0)?a:gcd(b,a%b));}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll totalGCD = 0;
        ll prefix[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
            totalGCD = gcd(a[i],totalGCD);
            prefix[i] = totalGCD;
        }
        if(totalGCD==1)cout<<0<<endl;
        else{
            if(gcd(prefix[n-2],gcd(a[n-1],n))==1)cout<<1<<endl;
            else if(gcd(prefix[n-3],gcd(gcd(a[n-2],n-1),a[n-1]))==1)cout<<2<<endl;
            else cout<<3<<endl;
        }
    }
    return 0;
}