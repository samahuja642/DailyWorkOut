#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

vector<int>sieveStore(100001,-1);

void sieve(){
    sieveStore[0] = 0;sieveStore[1] = 1;
    for(int i=2;i<100001;i++){
        if(sieveStore[i]==-1){
            for(int j=i;j<100001;j+=i){
                if(sieveStore[j]==-1)sieveStore[j] = i;
            }
        }
    }
}

void prime_fact(int n){
    while(n!=1){
        cout<<sieveStore[n]<<" * ";
        n = n/sieveStore[n];
    }
    cout<<1<<endl;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    sieve();
    prime_fact(63);
    return 0;
}