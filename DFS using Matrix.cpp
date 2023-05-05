#include<bits/stdc++.h>
using namespace std;

void dfs(int **G, int n , int source){

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
        for(int i=0;i<n;i++){
                if(G[v][i]==1){
                int next = i;
                    if(visited[next]==false){
                        S.push(next);
                        visited[next]=true;
                    }
                }
        }

    }

    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<i<<" "<<visited[i]<<endl;
    }

}

int main()
{

    int nodes;
    int edges;
    int **g;

    cin>>nodes>>edges;

    g = new int*[nodes];
    for(int i=0;i<nodes;i++){
        g[i] = new int[nodes];
    }

     for(int i=0; i<nodes; i++)
    {
        for(int j=0; j<nodes; j++)
        {
            g[i][j]=0;
        }
    }


    int u,v;

    for(int i=0; i<edges; i++)
    {
        cin>>u>>v;
        g[u][v]=1;
        g[v][u]=1;
    }

    for(int i=0; i<nodes; i++)
    {
        for(int j=0; j<nodes; j++)
        {
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }

    dfs(g,nodes,0);


    return 0;
}
