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
        ll n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        unordered_map<char,int>count,aCount,bCount;
        for(int i=0;i<a.length();i++){
            count[a[i]]++;
            aCount[a[i]]++;
        }
        for(int i=0;i<b.length();i++){
            count[b[i]]++;
            bCount[b[i]]++;
        }
        char different;
        int odds = 0;
        for(auto it=count.begin();it!=count.end();it++){
            if((it->second&1)==1){
                odds++;
                different = it->first;
            }
        }
        if(count.size()==1)cout<<"YES"<<endl;
        else if(odds>1){
            cout<<"NO"<<endl;
        }
        else if(odds==0){
            cout<<"YES"<<endl;
        }
        else{
            if((aCount[different]&1)==1 && a.length()>b.length()){
                cout<<"YES"<<endl;
            }
            else if((bCount[different]&1)==1 && b.length()>a.length()){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}