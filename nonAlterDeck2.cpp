#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll curr = 1;
        // ll inc = 1;
        bool black = 1;
        ll scWhiteA = 1,scWhiteB = 0,scBlackA = 0,scBlackB = 0;
        bool Aturn = 0;
        n--;
        while(n){
            ll sum = 0;
            curr++;
            sum+=curr;
            curr++;
            sum+=curr;
            if(n>=sum){
                n-=sum;
            }
            else{
                sum = n;
                n-=sum;
            }
            if(black==0 && Aturn){
                    scWhiteA+=(sum/2);
                    scWhiteA+=(sum%2);
                    scBlackA+=(sum/2);
                    black = 1;
                    Aturn = 0;
                }
                else if(black==1 && Aturn){
                    scWhiteA+=(sum/2);
                    scBlackA+=(sum%2);
                    scBlackA+=(sum/2);
                    black = 0;
                    Aturn = 0;
                }
                else if(black==0 && !Aturn){
                    scWhiteB+=(sum/2);
                    scWhiteB+=(sum%2);
                    scBlackB+=(sum/2);
                    black = 1;
                    Aturn = 1;
                }
                else{
                    scWhiteB+=(sum/2);
                    scBlackB+=(sum%2);
                    scBlackB+=(sum/2);
                    black = 0;
                    Aturn = 1;
                }
        }
        cout<<scWhiteA<<" "<<scBlackA<<" "<<scWhiteB<<" "<<scBlackB<<endl;
    }
    return 0;
}