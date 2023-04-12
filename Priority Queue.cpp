#include<bits/stdc++.h>
using namespace std;

/*
class cmp{
public:
    bool operator()(int l, int r){
        return l>r?1:0;
    }
};

*/

int main(){

priority_queue<int,vector<int>, greater<int>> pq;

pq.push(200); // 20
pq.push(10);// 20 100
pq.push(100);// 1 20 100

//pq.pop();
cout<<pq.top()<<endl;


return 0;
}
