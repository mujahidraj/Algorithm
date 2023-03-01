#include<bits/stdc++.h>
using namespace std;

void generatedata(int *p, int n)
{
    for(int i = 0;i<n;i++)
    {
        p[i] = 10;
    }
}


void printList(int *p,int n)
{
     for(int i= 0;i<n;i++)
  {


          cout<<" "<<p[i]<< endl;


  }
}

  int main()
  {
      int n;
      cin >>n;
      int *a = new int [n];
      generatedata(a,n);

      printList(a,n);


      return 0;
  }
