#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    string a;
    cin>>a;
    string ans; 
    bool firstZero = false;
    for(int i=0;i<a.length();i++){
        if(firstZero==false && a[i]=='0'){
            firstZero = true;
        }
        else ans.push_back(a[i]);
    }
    if(firstZero==false){
        ans.pop_back();
    }
    cout<<ans<<endl;
    return 0;
}