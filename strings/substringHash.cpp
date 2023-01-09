#include<bits/stdc++.h>
using namespace std;

#define mod 100007
vector<int>dp(100007);

void initializer(string str){
    dp[0] = (str[0]-'a'+1)%mod;
    int p = 29;
    for(int i=1;i<str.length();i++){
        dp[i] = ( dp[i-1]%mod + (int)((str[i]-'a'+1)*pow(p,i))%mod )%mod;
    }
}

int substringHash(int l,int r){
    if(l==0)return dp[r];
    return dp[r] - dp[l-1];
}

int main(){
    string str="abacabathpt";
    initializer(str);
    int l = 0,r = 7;
    cout<<substringHash(l,r)<<endl;
    return 0;
}