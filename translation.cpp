#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    string str,transStr;
    cin>>str>>transStr;
    bool ans = true;
    for(int i=0;i<str.length();i++){
        if(str[i]!=transStr[str.length()-1-i])ans = false;
    }
    if(ans == false)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}