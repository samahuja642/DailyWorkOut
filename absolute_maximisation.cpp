#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int res1,res2;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i==0){
                res1 = arr[i];
                res2 = arr[i];
            }
            else{
                res1 |= arr[i];
                res2 &= arr[i];
            }
        }
        cout<<res1 - res2<<endl;
    }
    return 0;
}