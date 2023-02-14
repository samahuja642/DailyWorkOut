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
        ll a[n];
        ll minEvens = 0,minOdds = 1,vEvens = INT_MAX,vOdds = INT_MAX;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(i%2==0){
                if(vEvens>a[i]){
                    minEvens = i;
                    vEvens = a[minEvens];
                }
            }
            else{
                if(vOdds>a[i]){
                    minOdds = i;
                    vOdds = a[minOdds];
                }
            }
        }
        if(n%2==0){
            if(vEvens>vOdds){
                cout<<"Mike"<<endl;
            }
            else if(vEvens<vOdds){
                cout<<"Joe"<<endl;
            }
            else{
                if(minEvens<minOdds){
                    cout<<"Joe"<<endl;
                }
                else{
                    cout<<"Mike"<<endl;
                }
            }
        }
        else{
            cout<<"Mike"<<endl;
        }
    }
    return 0;
}