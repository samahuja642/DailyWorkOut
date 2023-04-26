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
    for(ll i=0;i<s.length();i++)s[i] = tolower(s[i]);
    string match = "meow";
    ll index = 0;
    ll last = 0;
    for(ll i=0;i<s.length();i++){
        if(match[index]==s[i]){
            while(i<s.length() && (match[index]==s[i])){
                i++;
            }
            i--;
            last = i;
            index++;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    if(index==4 && last==s.length()-1){
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