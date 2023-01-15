#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int power(int a,int b){
    int ans = 1;
    while(b!=1){
        if(b&1)ans *= a;
        a *= a;
        b = b/2;
    }
    ans *=a;
    return ans;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    int a=1,b=7;
    cout<<power(a,b)<<endl;
    return 0;
}