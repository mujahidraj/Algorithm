#include<bits/stdc++.h>
using namespace std;

struct Node{
    int value;
    int weight;
};

int main(){


    vector<Node> *g;
    int n; // # vertex
    int m; // # Edges
    cin>>n>>m;

    g = new vector<Node>[n];

    int u,v,w;

    for(int i=0;i<m;i++){
        cin>>u>>v>>w;
        Node s1 = {v,w};
        g[u].push_back(s1);
        s1 = {u,w};
        g[v].push_back(s1);
    }

    for(int i=0;i<n;i++){
            cout<<i<<"-->";
    for(int j=0;j<g[i].size();j++){
        Node o = g[i][j];
        cout<<"("<<o.value<<" "<<o.weight<<")";
    }
    cout<<endl;
    }



return 0;
}
