#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nline "\n"

typedef long long ll;
typedef unsigned long long ull;

bool isPrime(ll n){
    for(ll i=2;i*i<n;i++){
        if(n%i==0){return false;}
    }
    return true;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll t;
    cin>>t;
    while(t--){
        cout<<"testcase"<<endl;
        ll n;
        cin>>n;
        ll number = n;
        unordered_map<ll,ll>factors;
        for(ll i=2;i<number;i++){
            while(isPrime(i) && n%i==0){
                factors[i]++;
                n = n/i;
                cout<<i<<" "<<n<<endl;
            }
            if(n==1)break;
        }
        ll ans = 0;
        while(true){
            cout<<"working"<<endl;
            ll temp = 1;
            for(auto it=factors.begin();it!=factors.end();it++){
                if(it->second){
                    it->second--;
                    temp *= it->first;
                }
            }
            cout<<temp<<endl;
            if(temp==1)break;
            ans+=temp;
        }
        cout<<ans<<endl;
    }
    return 0;
}