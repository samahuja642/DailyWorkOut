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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int operation = 0;
        for(int i=0;i<n-1;i++){
            if(a[i]==-1 && a[i+1]==-1){
                a[i] *= -1;
                a[i+1] *= -1;
                operation++;
                break;
            }
        }
        if(operation==0){
            for(int i=0;i<n-1;i++){
                if(a[i]==1 && a[i+1]==-1){
                    a[i] *= -1;
                    a[i+1] *= -1;
                    operation++;
                    break;
                }
            }
            if(operation==0){
                a[0]*=-1;
                a[1]*=-1;
                operation++;
            }
        }
        ll sum = 0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}