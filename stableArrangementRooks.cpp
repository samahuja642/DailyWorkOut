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
        ll n,k;
        cin>>n>>k;
        if(ceil(float(n)/float(2))<k){
            cout<<"-1"<<endl;
        }
        else{
            vector<vector<char>>matrix(n,vector<char>(n,'.'));
            int count = 0;
            for(int i=0;i<n;i+=2){
                for(int j=0;j<n;j+=2){
                    if(count<k && i==j){
                        matrix[i][j] = 'R';
                        count++;
                    }
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<matrix[i][j];
                }
                cout<<endl;
            }
        }
    }
    return 0;
}