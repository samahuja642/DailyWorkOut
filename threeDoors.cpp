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
        ll x;
        cin>>x;
        ll doors[3];
        for(int i=0;i<3;i++){
            cin>>doors[i];
        }
        vector<bool>open(3,false);
        int key = x-1;
        while(key!=-1){
            open[key] = true;
            key = doors[key]-1;
        }
        if(open[0]&&open[1]&&open[2])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}