#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

vector<vector<int>>grid(4,vector<int>(4,1));

int nPaths = 0;

void dp(int sx,int sy,int ex,int ey){
    if(grid[sx][sy]==0){
        return;
    }
    if(ex==sx && ey==sy){
        nPaths++;
        return;
    }
    if(sx<ex)dp(sx+1,sy,ex,ey);
    if(sy<ey)dp(sx,sy+1,ex,ey);
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    int sx = 0,sy=0,ex=3,ey=3;
    grid[1][1] = 0;
    grid[2][3] = 0;
    grid[3][0] = 0;
    dp(sx,sy,ex,ey);
    cout<<nPaths<<endl;
    return 0;
}