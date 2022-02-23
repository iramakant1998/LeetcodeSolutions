#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<int> graph[N];
int p[N];

void dfs(int vertex,int par=0){
    p[vertex]=par;
    for(int child:graph[vertex]){
        if(child==par) continue;
        dfs(child,vertex);
    }
}
vector<int> path(int v){
    vector<int> ans;
    while(v!=0){
        ans.push_back(v);
        v=p[v];
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n-1;++i){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    dfs(1);
    int x,y;
    cin>>x>>y;
    vector<int> path_x=path(x);
    vector<int> path_y=path(y);
    int min_len =min(path_x.size(),path_y.size());
    int lca=-1;
    for(int i=0;i<min_len;++i){
        if(path_x[i]==path_y[i]){
            lca=path_x[i];
        }
    }
    cout<<lca;
 }