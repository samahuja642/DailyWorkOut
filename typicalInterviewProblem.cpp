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
        string matchStr = "FBFFBFFB";
        for(ll i=0;i<matchStr.length();i++){
            string temp;
            for(int j=0;j<n;j++){
                temp.push_back(matchStr[(i+j)%matchStr.length()]);
            }
            if(!temp.compare(s)){
                cout<<"YES"<<endl;
                return;
            }
        }
        cout<<"NO"<<endl;
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