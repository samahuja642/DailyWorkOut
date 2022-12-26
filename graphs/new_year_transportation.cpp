#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=1;i<n;i++){
        cin>>a[i];
    }
    int dest = 1;
    while(dest<t){
        dest += a[dest];
    }
    if(dest==t)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}