#include<bits/stdc++.h>
using namespace std;

int **matrix(int r, int c)
{
    int **m= new int *[r];
    for(int i =0;i<r;i++)
    {
        m[i] = new int [c];
    }
    return m;
}

void generateData (int **p,int row,int column)
{
    for(int i= 0;i<row;i++)
  {
      for(int j= 0;j<column;j++)
      {
          p[i][j] = 10;
      }
  }
}

void printMatrix(int **p,int row,int column)
{
     for(int i= 0;i<row;i++)
  {
      for(int j= 0;j<column;j++)
      {
          cout<<p[i][j]<< " ";
      }
      cout<<endl;
  }
}


int main()
{
    int row;
    int column;
    cin>>row>>column;

    int **p = matrix(row,column);

    generateData(p,row,column);

    printMatrix(p,row,column);

}
