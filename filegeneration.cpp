#include <bits/stdc++.h>

using namespace std;

int main (){

ofstream fout("10K.txt");

int n=10000;

srand(time(0));
for(int i=0;i<n;i++){

    fout<<rand()%10000+1<<endl;
}


return 0;
}
