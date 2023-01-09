#include<bits/stdc++.h>

using namespace std;

int mod = INT_MAX;

int calculateHash(string s){
    int ans = 0;
    int p = 29;
    for(int i=0;i<s.length();i++){
        ans =(ans%mod + ((int)((s[i]-'a'+1)*pow(p,i)))%mod)%mod;
    }
    return ans;
}

int main(){
    cout<<calculateHash("samahuja")<<endl;
    cout<<calculateHash("samahuja")<<endl;
    cout<<calculateHash("yashmehta")<<endl;
    return 0;
}