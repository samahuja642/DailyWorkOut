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
        ll n,m;
        cin>>n>>m;
        string s1,s2;
        cin>>s1>>s2;
        reverse(s2.begin(),s2.end());
        s1+=s2;
        int count = 0;
        for(ll i=0;i<s1.length()-1;i++){
            if(s1[i]==s1[i+1])count++;
        }
        if(count>1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}