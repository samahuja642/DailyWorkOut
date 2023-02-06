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
        ll n;
        cin>>n;
        ll a=1,b=0;
        ll init = 1;
        bool turna = false;
        n--;
        while(n){
            if(turna==false){
                ll sum = 0;
                init++;
                sum+=init;
                init++;
                sum+=init;
                if(sum>=n){
                    b+=n;
                    n = 0;
                }
                else{
                    b+=sum;
                    n-=sum;
                }
                turna = true;
            }
            else{
                ll sum = 0;
                init++;
                sum+=init;
                init++;
                sum+=init;
                if(sum>=n){
                    a+=n;
                    n = 0;
                }
                else{
                    a+=sum;
                    n-=sum;
                }
                turna = false;
            }
        }
        std::cout<<a<<" "<<b<<endl;
    }
    return 0;
}