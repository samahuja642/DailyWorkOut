#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

typedef long long ll;
typedef unsigned long long ull;

void solve(){
    ll a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
    ll sum = a1+a2+a3+a4;
    if(a1==0){
        cout<<1<<endl;
        return;
    }
    ll jokes = a1;
    // first done
    ll alice = a1,bob = a1;
    // 2nd divisible 
    jokes+=(2*(a1*min(a2/a1,a3/a1)));
    cout<<"jokes"<<jokes<<endl;
    // non divisible alice 
    alice += min((a2-a1*min(a2/a1,a3/a1)),a1);
    bob -= min((a2-a1*min(a2/a1,a3/a1)),a1);
    jokes+=min((a2-a1*min(a2/a1,a3/a1)),a1);

    // a1-min((a2-a1*min(a2/a1,a3/a1)),a1);
    cout<<"jokes"<<jokes<<endl;
    jokes+=min((a3-a1*min(a2/a1,a3/a1)),alice);
    alice-=min((a3-a1*min(a2/a1,a3/a1)),alice);
    bob+=min((a3-a1*min(a2/a1,a3/a1)),alice);
    cout<<alice<<" "<<bob<<endl;
    cout<<"jokes"<<jokes<<endl;
    jokes+=min(min(alice,bob),a4);
    // ll alice = a1 -(a3%a1),bob = a1 - (a2%a1);
    // ll jokes = a1+a2+a3;
    // jokes += min(alice,min(bob,a4));
    if(sum>jokes)jokes++;
    cout<<jokes<<endl;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}