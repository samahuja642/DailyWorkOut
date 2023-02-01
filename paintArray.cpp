#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

ll gcd(ll a,ll b){
    if(b==0)return a;
    return gcd(b,a%b);
}

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
        ll gcd0=0,gcd1=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i&1)gcd1 = gcd(gcd1,a[i]);
            else gcd0 = gcd(gcd0,a[i]);
        }
        bool possible = true;
        for(int i=0;i<n;i+=2){
            if(a[i]%gcd1==0)possible = false;
        }
        if(possible){
            cout<<gcd1<<endl;
        }
        else{
            possible = true;
            for(int i=1;i<n;i+=2){
                if(a[i]%gcd0==0)possible = false;
            }
            if(possible){
                cout<<gcd0<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
    }
    return 0;
}