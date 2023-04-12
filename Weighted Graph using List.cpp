#include<bits/stdc++.h>
using namespace std;

struct vartex{
    int value;
    int cost;
};

int main(){


   // vector<vartex> *g;
    int n; // # vertex
    int m; // # Edges
    cin>>n>>m;

    vector<vartex> *g= new vector<vartex>[n];

    int u,v,w;

    for(int i=0;i<m;i++){
        cin>>u>>v>>w;
        vartex s1 = {v,w};
        g[u].push_back(s1);
        s1 = {u,w};
        g[v].push_back(s1);
    }

    for(int i=0;i<n;i++){
            cout<<i<<"-->";
    for(int j=0;j<g[i].size();j++){
        vartex o = g[i][j];
        cout<<"("<<g[i][j].value<<" "<<g[i][j].cost<<")";
    }
    cout<<endl;
    }



return 0;
}
