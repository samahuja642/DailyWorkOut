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
        char c;
        cin>>c;
        string str = "codeforces";
        bool possible = false;
        for(int i=0;i<str.length();i++){
            if(c==str[i])possible = true;
        }
        if(possible)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}