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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int diff = INT_MAX;
        for(int i=0;i<n-1;i++){
            if(a[i+1]-a[i] < diff){
                diff = a[i+1] - a[i];
            }
        }
        cout<<diff<<endl;
    }
    return 0;
}