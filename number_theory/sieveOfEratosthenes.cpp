#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

void sieve(vector<bool>&isPrime,int maxN){
    for(int i=2;i*i<=maxN;i++){
        if(isPrime[i]){
            for(int j=i*i;j<=maxN;j+=i){
                isPrime[j] = 0;
            }
        }
    }
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    int maxN = 50;
    vector<bool>isPrime(51,true);
    isPrime[0] = 0;isPrime[1] = 0;
    sieve(isPrime,maxN);
    for(int i=0;i<51;i++){
        cout<<i<<" "<<isPrime[i]<<endl;
    }
    return 0;
}