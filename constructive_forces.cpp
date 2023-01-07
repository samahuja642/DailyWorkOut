#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n&1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                if(i&1)cout<<"2 ";
                else cout<<"-2 ";
            }
            cout<<endl;
        }
    }
    return 0;
}