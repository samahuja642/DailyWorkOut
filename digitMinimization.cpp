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
        string n;
        cin>>n;
        if(n.length()==2)cout<<n[n.length()-1]<<endl;
        else{
            vector<int>digits;
            for(ll i=0;i<n.length();i++){
                digits.push_back(n[i]-'0');
            }
            sort(digits.begin(),digits.end());
            cout<<digits[0]<<endl;
        }
    }
    return 0;
}