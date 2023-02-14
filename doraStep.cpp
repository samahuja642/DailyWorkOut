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
        ll a[n];
        set<ll>s;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            s.insert(i+1);
        }
        bool ans = false;
        ll left = 0, right = n-1;
        while(left<right){
            if(a[left]==*(s.begin()) || a[left]==*(s.rbegin())){
                s.erase(s.find(a[left]));
                left++;
            }
            if(a[right]==*(s.rbegin()) || a[right]==*(s.begin())){
                s.erase(s.find(a[right]));
                right--;
            }
            if(left<right && a[left]!=*(s.begin()) && a[left]!=*(s.rbegin()) && a[right]!=*(s.begin()) && a[right]!=*(s.rbegin())){
                cout<<left+1<<" "<<right+1<<endl;
                ans = true;
                break;
            }
        }
        if(!ans){
            cout<<-1<<endl;
        }
    }
    return 0;
}