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
    int count = 1;
    for(int i=0;i<s.length();i++){
        while(i<s.length() && s[i]==s[i+1]){
            i++;
            count++;
        }
        if(count>=7){
            break;
        }
        else{
            count = 1;
        }
    }
    if(count>=7)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}