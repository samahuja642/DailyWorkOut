#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    string s;
    cin>>s;
    bool ans = true;
    for(int i=0;i<s.length();i++){
        if(i+2<s.length() && s[i]=='1' && s[i+1]=='4' && s[i+2]=='4'){
            i+=2;
        }
        else if(i+1<s.length() && s[i]=='1' && s[i+1]=='4'){
            i++;
        }
        else if(s[i]!='1'){
            ans = false;
            break;
        }
    }
    if(ans==false)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}