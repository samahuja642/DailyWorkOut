#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

vector<bool>isPrime(1000001,1);
vector<ll>primes(1000001,0);
vector<ll>ans(1000001,0);

void sieve(){
    for(ll i=2;i*i<1000001;i++){
        if(isPrime[i]==1){
            for(ll j=i*i;j<1000001;j+=i){
                isPrime[j] = 0;
            }
        }
    }
    for(ll i=2;i<1000001;i++){
        primes[i] = primes[i-1] + int(isPrime[i]);
    }
    for(ll i=2;i<1000001;i++){
        ans[i] = ans[i-1] + int(isPrime[primes[i]]);
    }
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    isPrime[0]=0;isPrime[1]=0;
    sieve();
    ll t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        ll a = ans[r] - ans[l-1];
        cout<<a<<endl;
    }
    return 0;
}