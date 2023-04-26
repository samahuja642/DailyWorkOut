#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nline "\n"

typedef long long ll;
typedef unsigned long long ull;

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<string>coll(2*(n-1));
        vector<string>letter1;
        vector<string>nletter;
        for(ll i=0;i<(2*(n-1));i++){
            cin>>coll[i];
            if(coll[i].size()==1)letter1.push_back(coll[i]);
            else if(coll[i].size()==n-1)nletter.push_back(coll[i]);
        }
        if(n!=2)reverse(nletter[1].begin(),nletter[1].end());
        if(letter1[0]==letter1[1] && (n==2 || nletter[0]==nletter[1])){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}