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
        int a,b;
        cin>>a>>b;
        if(2*min(a,b)<max(a,b)){
            cout<<pow(max(a,b),2)<<endl;
        }
        else{
            cout<<pow(2*min(a,b),2)<<endl;
        }
    }
    return 0;
}