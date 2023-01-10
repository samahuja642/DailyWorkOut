// misunderstood the question
#include<bits/stdc++.h>

using namespace std;

int main(){
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>>dragons(n);
    vector<int>profit(n);
    for(int i=0;i<n;i++){
        cin>>dragons[i].first>>dragons[i].second;
        profit[i] = dragons[i].second - dragons[i].first;
    }
    vector<bool>done(n);
    bool ans = true;
    for(int i=0;i<n;i++){
        int maxi = INT_MIN;
        int mPIndex = -1;
        for(int j=0;j<n;j++){
            cout<<"hgg"<<j<<endl;
            cout<<s<<endl;
            if(done[j]==0 && dragons[j].first<=s){
                if(maxi<profit[j]){
                    maxi = profit[j];
                    mPIndex = j;
                    cout<<mPIndex<<endl;
                }
            }
        }
        if(mPIndex==-1){
            ans = false;
            break;
        }
        else{
            // s-=dragons[mPIndex].first;
            s+=profit[mPIndex];
            done[mPIndex] = true;
        }
    }
    if(ans==true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}