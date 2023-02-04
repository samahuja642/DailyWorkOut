#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string directions;
        cin>>directions;
        int x = 0,y = 0;
        for(int i=0;i<directions.length();i++){
            if(directions[i]=='U')y++;
            else if(directions[i]=='D')y--;
            else if(directions[i]=='L')x--;
            else if(directions[i]=='R')x++;
            if(x==1&&y==1)break;
        }
        if(x==1&&y==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}