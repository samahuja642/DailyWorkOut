#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    vector<pair<int,int>>arr(2*n);
    for(int i=0;i<2*n;i++){
        cin>>arr[i].first;
        arr[i].second = i;
    }
    sort(arr.begin(),arr.end());
    bool ans = 1;
    for(int i=0;i<2*n;i+=2){
        if(arr[i].first!=arr[i+1].first){
            ans = 0;
            break;
        }
    }
    if(ans == 0){
        cout<<-1<<"\n";
    }
    else{
        for(int i=0;i<2*n;i+=2){
            cout<<arr[i].second+1<<" "<<arr[i+1].second+1<<"\n";
        }
    }
    return 0;
}