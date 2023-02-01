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
        ll n;
        cin>>n;
        string ans;
        string prev;
        for(ll i=0;i<n-2;i++){
            string temp;
            cin>>temp;
            if(i==0){
                ans = temp;
                prev = temp;
            }
            else{
                if(prev[1]==temp[0]){
                    ans.push_back(temp[1]);
                }
                else{
                    ans.append(temp);
                }
                prev = temp;
            }
        }
        while(ans.length()!=n){
            ans.push_back('a');
        }
        cout<<ans<<endl;
    }
    return 0;
}