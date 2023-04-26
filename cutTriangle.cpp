#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nline "\n"

typedef long long ll;
typedef unsigned long long ull;

float distancePoints(pair<ll,ll>p1,pair<ll,ll>p2){
    return pow((p1.first-p2.first),2)+pow((p1.second-p2.second),2);
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll t;
    cin>>t;
    while(t--){
        pair<ll,ll>tri1,tri2,tri3;
        cin>>tri1.first>>tri1.second>>tri2.first>>tri2.second>>tri3.first>>tri3.second;
        // float a[3];
        // a[0]=distancePoints(tri1,tri2);
        // a[1]=distancePoints(tri2,tri3);
        // a[2]=distancePoints(tri3,tri1);
        // sort(a,a+3);
        // if(a[2]==(a[0]+a[1])){
        //     cout<<"NO"<<endl;
        // }
        // else{
        //     cout<<"YES"<<endl;
        // }
        if((tri1.first==tri2.first && (tri2.second==tri3.second||tri1.second==tri3.second)) || (tri1.first==tri3.first && (tri1.second==tri2.second||tri3.second==tri2.second)) || (tri2.first==tri3.first && (tri2.second==tri1.second||tri3.second==tri1.second))){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}