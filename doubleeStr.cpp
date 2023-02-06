#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        vector<string>substrA,substrB;
        for(int i=0;i<a.length();i++){
            for(int j=i;j<a.length();j++){
                substrA.push_back(a.substr(i,j - i + 1));
            }
        }
        for(int i=0;i<b.length();i++){
            for(int j=i;j<b.length();j++){
                substrB.push_back(b.substr(i,j - i + 1));
            }
        }
        int maxLength = 0;
        for(auto it1:substrA){
            for(auto it2:substrB){
                if(it1.length()==it2.length()){
                    bool same = true;
                    for(int i=0;i<it1.length();i++){
                        if(it1[i]!=it2[i])same = false;
                    }
                    if(same)maxLength = max(maxLength,int(it1.length()));
                }
            }
        }
        cout<<a.length()+b.length()-2*maxLength<<endl;
    }
    return 0;
}