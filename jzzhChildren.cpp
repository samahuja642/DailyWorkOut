#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll n,m;
    cin>>n>>m;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int satisfied = 0;
    int ans = 0;
    while(1){
        for(int i=0;i<n;i++){
            if(a[i]>0){
                if(satisfied==n-1){
                    ans = i;
                    cout<<ans+1<<endl;
                    return 0;
                }
                a[i]-=m;
                if(a[i]<=0)satisfied++;
            }
        }
    }
    return 0;
}