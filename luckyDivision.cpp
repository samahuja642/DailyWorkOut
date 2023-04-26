#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

bool isLucky(ll n){
    while(n){
        if(((n%10)!=4) && ((n%10)!=7))return false;
        n = n/10;
    }
    return true;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll n;
    cin>>n;
    // ll arr[] = {4,7,44,47,74,77,444,447,474,477,744,747,777};
    // bool ans = false;
    // for(int i=0;i<(sizeof(arr)/sizeof(ll));i++){
    //     ll mul = 1;
    //     while((arr[i]*mul)<n){
    //         mul++;
    //     }
    //     if((arr[i]*mul)==n){
    //         cout<<"YES"<<endl;
    //         ans = true;
    //         break;
    //     }
    // }
    // if(!ans){
    //     cout<<"NO"<<endl;
    // }

    // method 2
    for(ll i=1;i<=n;i++){
        if((n%i)==0){
            if(isLucky(i)){
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}