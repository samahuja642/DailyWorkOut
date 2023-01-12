#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

vector<int>primes;

void sieve(vector<bool>&isPrime,ll maxN){
    for(ll i=2;i*i<=maxN;i++){
        if(isPrime[i]){
            for(ll j=i*i;j<=maxN;j+=i){
                isPrime[j] = 0;
            }
        }
    }
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll t;
    cin>>t;
    ll maxN = 90000000;
    vector<bool>isPrime(maxN+1,1);
    isPrime[0] = 0;isPrime[1] = 0;
    sieve(isPrime,maxN);
    int count = 0;
    for(int i=0;i<=maxN;i++){
        if(isPrime[i]==1){
            primes.push_back(i);
        }
    }
    while(t--){
        ll k;
        cin>>k;
        cout<<primes[k-1]<<endl;
    }
    return 0;
}