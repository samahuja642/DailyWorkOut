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
    int ans = 0;
    for(int i=0;i<s.length();i++){
        int temp = 1;
          while(i<s.length() && s[i]==s[i+1]){
            temp++;
            i++;
          }
        if(ans<temp)ans = temp;
    }
    cout<<ans<<endl;
    return 0;
}