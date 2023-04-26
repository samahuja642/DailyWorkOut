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
        ll a,b,c;
        cin>>a>>b>>c;
        if((2*b-a)>0 && ((2*b-a)%c)==0){
            // cout<<"c"<<endl;
            cout<<"YES"<<endl;
        }
        else if(((a+c)%(2*b))==0){
            // cout<<"b"<<endl;
            cout<<"YES"<<endl;
        }
        else if((2*b-c)>0 && ((2*b-c)%a)==0){
            // cout<<"a"<<endl;
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}