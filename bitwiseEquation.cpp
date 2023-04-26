#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ull t;
    cin>>t;
    while(t--){
        ull n;
        cin>>n;
        if(n==0)cout<<1<<" "<<3<<" "<<4<<" "<<5<<endl;
        else if(n==3)cout<<3<<" "<<4<<" "<<2<<" "<<(2^n)<<endl;
        else if(n==6)cout<<1<<" "<<6<<" "<<2<<" "<<(2^n)<<endl;
        else cout<<1<<" "<<4<<" "<<2<<" "<<(2^n)<<endl;
    }
    return 0;
}