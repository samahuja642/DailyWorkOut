#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans = 0;
        for(int i=1;i<=n;i++){
            int minDiffVal = INT_MAX;
            int minDiffPtr = -1; 
            for(int j=0;j<arr.size();j++){
                if(arr[j]<=i){
                    if(minDiffVal>abs(arr[j]-i)){
                        minDiffPtr = j;
                        minDiffVal = abs(arr[j] - i);
                    }
                }
                // cout<<"ptr value "<<minDiffPtr<<" "<<minDiffVal<<endl;
            }
            if(minDiffVal == INT_MAX){
                ans = -1;
                break;
            }
            else{
                swap(arr[minDiffPtr],arr[arr.size()-1]);
                arr.pop_back();
                ans+=minDiffVal;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}