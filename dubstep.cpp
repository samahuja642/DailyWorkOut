#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    string str;
    cin>>str;
    string ans;
    string word;
    for(int i=0;i<str.length();i++){
        if((i<str.length()&&str[i]=='W')&&(i<str.length()&&str[i+1]=='U')&&(i<str.length()&&str[i+2]=='B')){
            if(word.length()>0){
                ans += word;
                ans.push_back(' ');
                word = "";
            }
            i+=2;
        }
        else word.push_back(str[i]);
    }
    ans+=word;
    cout<<ans<<endl;
    return 0;
}