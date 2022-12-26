#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<ll>graph[500005];
vector<ll>NDist(500005);
vector<bool>visited(500005);

void bfs(int vertex){
    vector<ll>components;
    queue<ll>q;
    q.push(vertex);
    while(!q.empty()){
        ll parent = q.front();
        q.pop();
        if(visited[parent])continue;
        visited[parent] = true;
        components.push_back(parent);
        for(auto child:graph[parent]){
            if(!visited[child]){
                q.push(child);
            }
        }
    }
    for(auto vertex:components){
        NDist[vertex] = components.size();
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    int k;
    for(int i=0;i<m;i++){
        cin>>k;
        vector<ll>temp(k);
        for(int j=0;j<k;j++){
            cin>>temp[j];
        }
        for(int j=0;j<k-1;j++){
            graph[temp[j]].push_back(temp[j+1]);
            graph[temp[j+1]].push_back(temp[j]);
        }
    }
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            bfs(i);
        }
    }
    for(int i=1;i<=n;i++){
        cout<<NDist[i]<<" ";
    }
    return 0;
}