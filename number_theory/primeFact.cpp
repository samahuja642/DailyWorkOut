#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

void primeFact(int n){
    for(int i=2;i*i<=n;i++){
        int cnt=0;
        while(n%i==0){
            cnt++;
            n = n/i;
        }
        if(cnt>0)cout<<i<<" ^ "<<cnt<<endl;
    }
    if(n>1)cout<<n<<" ^ "<<1<<endl;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    int n = 168;
    primeFact(n);
    return 0;
}