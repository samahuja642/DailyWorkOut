#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// vertex cover is a set of vertices that includes atleast one endpoint of every edge.

// disjoint sets are just two vertex cover 
// properties of disjoint sets are : - 
// 1. elements of sets are disjoint
// 2. edges are between these two sets

// A graph which can be divided into two disjoint sets is called bipartite graph.
// bipartite graph visual identification can be a graph without cycle or having even length cycle.

vector<ll>graph[100005];
vector<bool>visited(100005);
vector<bool>color(100005);
bool bipartite = true;

void dfs(ll vertex,bool c){
    visited[vertex] = true;
    color[vertex] = c;
    c = c ^ true;
    for(ll child : graph[vertex]){
        if(!visited[child]){
            dfs(child,c);
        }else{
            if(color[child]!=c){
                bipartite = false;
                return;
            }
        }
    }
}

int main(){
    ll n,m;
    cin>>n>>m;
    ll u,v;
    for(ll i=0;i<m;i++){
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(ll i=1;i<=n;i++){
        if(!visited[i]){
            dfs(i,true);
        }
    }
    if(bipartite == false){
        cout<<-1<<endl;
        return 0;
    }
    vector<ll>set0;
    vector<ll>set1;
    for(int i=1;i<=n;i++){
        if(graph[i].size()>0){
            if(color[i]==false)set0.push_back(i);
            else set1.push_back(i);
        }
    }
    cout<<set0.size()<<endl;
    for(auto item:set0){
        cout<<item<<" ";
    }
    cout<<endl;
    cout<<set1.size()<<endl;
    for(auto item:set1){
        cout<<item<<" ";
    }
    return 0;
}