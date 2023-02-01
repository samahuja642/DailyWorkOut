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
        vector<ll>a(n);
        vector<ll>odds,evens;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]&1)odds.push_back(i+1);
            else evens.push_back(i+1);
        }
        if(odds.size()==0){
            cout<<"NO"<<endl;
        }
        else if(odds.size()==1){
            cout<<"YES"<<endl;
            cout<<odds[0]<<" "<<evens[0]<<" "<<evens[1]<<endl;
        }
        else if(odds.size()==2){
            if(evens.size()>=2){
                cout<<"YES"<<endl;
                cout<<odds[0]<<" "<<evens[0]<<" "<<evens[1]<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
            cout<<odds[0]<<" "<<odds[1]<<" "<<odds[2]<<endl;
        }
    }
    return 0;
}