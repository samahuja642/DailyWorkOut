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
        ll n,c;
        cin>>n>>c;
        vector<ll>arr(n);
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            arr[i] += (i+1);
        }
        sort(arr.begin(),arr.end());
        ll currTel = 0; 
        ll ans = 0;
        // for(auto it:arr)cout<<it<<" ";
        // cout<<endl;
        while(currTel<arr.size() && c){
            if(arr[currTel] <= c){
                c-=arr[currTel];
                // cout<<"step "<<arr[currTel]<<" "<<c<<endl;
                currTel++;
                ans++;
            }
            else c = 0;
        }
        cout<<ans<<endl;
    }
    return 0;
}