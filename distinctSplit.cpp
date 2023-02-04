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
        string s;
        cin>>s;
        vector<int>prefixD(n,1);
        vector<int>suffixD(n,1);
        set<int>uniqueP;
        set<int>uniqueS;
        for(int i=0;i<n;i++){
            uniqueP.insert(s[i]);
            prefixD[i] = uniqueP.size();
        }
        for(int i=n-1;i>=0;i--){
            uniqueS.insert(s[i]);
            suffixD[i] = uniqueS.size();
        }
        int ans = INT_MIN;
        for(int i=0;i<n-1;i++){
            ans = max(ans,prefixD[i]+suffixD[i+1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}