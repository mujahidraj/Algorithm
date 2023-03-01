#include<bits/stdc++.h>
using namespace std;

void   maxPairWiseNaive(int a[] , int n)
{


    int product = 0;

    for(int i = 0;i<n;i++)
    {
        for (int j =i+1;j<n;j++)
        {
            if(product < a[i]*a[j])
            {
                product = a[i] * a[j];
            }
        }
        cout<<"Max Pair product is : "<<product<<endl;
    }

   }
int main(){

    int a [] = {1,5,3,54,3,2};
    int n = sizeof(a)/sizeof(a[0]);
 maxPairWiseNaive(a,n);



return 0;
}
