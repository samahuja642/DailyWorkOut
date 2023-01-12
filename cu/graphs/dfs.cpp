#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

vector<int>graph[6];
vector<bool>visited(6);

void addEdge(int a,int b){
    graph[a].push_back(b);
    graph[b].push_back(a);
}

void worker(int src){
    cout<<src<<" ";
    visited[src]=1;
    for(auto it:graph[src]){
        if(visited[it]==0){
            worker(it);
        }
    }
}

void dfs(int src){
    for(int i=1;i<=5;i++){
        if(visited[i]==0){
            worker(i);
        }
    }
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    addEdge(1,2);
    addEdge(1,3);
    addEdge(2,5);
    addEdge(3,4);
    dfs(1);
    return 0;
}