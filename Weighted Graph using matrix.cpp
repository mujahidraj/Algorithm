#include<bits/stdc++.h>
using namespace std;


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


    int u,v,w;

    for(int i=0; i<edges; i++)
    {
        cin>>u>>v>>w;
        g[u][v]=w;
        g[v][u]=w;
    }

    for(int i=0; i<nodes; i++)
    {
        for(int j=0; j<nodes; j++)
        {
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
