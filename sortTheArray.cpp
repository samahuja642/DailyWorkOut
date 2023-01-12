#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll n;
    cin>>n;
    ll a[n];
    ll sorted[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
        sorted[i] = a[i];
    }
    sort(sorted,sorted+n);
    bool rightPos[n];
    int wrong = 0;
    for(ll i=0;i<n;i++){
        if(a[i]==sorted[i])rightPos[i]=true;
        else {rightPos[i]=false;wrong++;}
    }
    int count=1;
    bool ans = 1;
    int val1=1,val2=1;
    if(wrong!=n){
        for(ll i=0;i<n;i++){
            if(count==1 && rightPos[i]==false){
                val1 = i+1;
                while(i<n && rightPos[i]==false){
                    cout<<i<<endl;
                    i++;
                }
                if(i==n-1)val2 = i+1;
                else val2 = i;
                // cout<<i<<endl;
                count++;
            }
            else if(rightPos[i]==false && count==2){
                // cout<<i<<endl;
                ans = 0;
                break;
            }
        }
    }
    if(ans==0)cout<<"no"<<endl;
    else{
        if(wrong==n){
            val1 = 1;
            val2 = n;
        }
        for(int i=val1-1;i<=val2-1;i++){
            if(a[i]!=sorted[val2-(i-val1)]){
                cout<<i<<" "<<
                ans = false;
            }
        }
        if(ans){
            cout<<"yes"<<endl;
            cout<<val1<<" "<<val2<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}