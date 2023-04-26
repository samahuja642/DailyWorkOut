#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nline "\n"

typedef long long ll;
typedef unsigned long long ull;

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string starting,ending;
    for(ll i=0;i<n/2;i++){
        starting.push_back(s[i]);
        ending.push_back(s[n-1-i]);
    }
    ll count = 0;
    for(ll i=0;i<n/2;i++){
        if(starting[i]!=ending[i]){
            count++;i++;
            while(i<n/2 && starting[i]!=ending[i])i++;
        }
    }
    if(count<=1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}