#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    int n=5;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int b[n];
    for(int i=0;i<n;i++){
        b[i] = (i-1>=0&&i-1<n?a[i-1]:0)+(i+1>=0&&i+1<n?a[i+1]:0)+a[i];
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0;
}