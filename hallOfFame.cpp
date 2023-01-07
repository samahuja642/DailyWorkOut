#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int countL = 0,countR = 0;
        bool doneR = 0;
        int ans = INT_MAX;
        for(int i=0;i<n;i++){
            if(s[i]=='L')countL++;
            if(s[i]=='R'){
                doneR = 1;
                countR++;
            }
            if(doneR==1){
                if(s[i]=='L'){
                    ans = 0;
                    break;
                }
            }
        }
        if(ans==INT_MAX){
            if(countL==n||countR==n)ans=-1;
            else ans=1;
        }
        cout<<ans<<endl;
    }
    return 0;
}