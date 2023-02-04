#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll negatives = 0;
        ll smallest = INT_MAX;
        ll sum = 0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum += abs(a[i]);
            if(smallest>abs(a[i])){
                smallest = abs(a[i]);
            }
            if(a[i]<0)negatives++;
        }
        if(negatives&1)cout<<sum-2*smallest<<endl;
        else cout<<sum<<endl;
    }
    return 0;
}