#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll t,sx,sy,ex,ey;
    cin>>t>>sx>>sy>>ex>>ey;
    string wind;
    cin>>wind;
    ll ans = -1;
    for(int i=0;i<wind.size();i++){
        if(ex==sx&&ey==sy){
            ans = i;
            break;
        }
        if(ex>sx){
            if(wind[i]=='E')sx++;
        }
        else if(ex<sx){
            if(wind[i]=='W')sx--;
        }
        if(ey>sy){
            if(wind[i]=='N')sy++;
        }
        else if(ey<sy){
            if(wind[i]=='S')sy--;
        }
    }
    if(ans==-1 && ex==sx&&ey==sy){
        ans=t;
    }
    cout<<ans<<endl;
    return 0;
}