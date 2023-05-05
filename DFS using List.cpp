#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int> *G, int n , int source){

    stack<int> S;
    bool * visited = new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }


    visited[source]=true;
    S.push(source);

    while(!S.empty()){
        int v = S.top();
        S.pop();
        cout<<v<<" ";
        for(int i=0;i<G[v].size();i++){
            int next = G[v][i];
            if(visited[next]==false){
                S.push(next);
                visited[next]=true;
            }

        }

    }

    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<i<<" "<<visited[i]<<endl;
    }

}

int main(){


    vector<int> *g;
    int nodes;
    int edges;
    cin>>nodes>>edges;

    g = new vector<int>[nodes];

    int u,v;

    for(int i=0;i<edges;i++){
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for(int i=0;i<nodes;i++){
            cout<<i<<"-->";
    for(int j=0;j<g[i].size();j++){
        cout<<g[i][j]<<" ";
    }
    cout<<endl;
    }

    dfs(g,nodes,0);



return 0;
}
