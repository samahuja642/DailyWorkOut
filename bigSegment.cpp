#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>arr(n);
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
        if(arr[i].first<mini){
            mini = arr[i].first;
        }
        if(arr[i].first>maxi){
            maxi = arr[i].first;
        }
        if(arr[i].second<mini){
            mini = arr[i].second;
        }
        if(arr[i].second>maxi){
            maxi = arr[i].second;
        }
    }
    int ans = -2;
    for(int i=0;i<n;i++){
        if( arr[i].first==mini &&arr[i].second==maxi ){
            ans = i;
            break;
        }
    }
    cout<<ans+1<<endl;
    return 0;
}