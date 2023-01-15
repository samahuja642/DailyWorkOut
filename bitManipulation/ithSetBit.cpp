#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    int f = 1;
    int i = 5;
    int n = 1;
    f = f<<i;
    cout<<((f&n)!=0)<<endl;
    return 0;
}