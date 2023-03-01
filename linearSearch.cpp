#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int  linear(int a[],int n,int item)
{
    cout<<"Enter the Number to be searched: ";
    cin  >> item;
    for(int i = 0; i<n-1;i++)
    {
        if(a[i] == item )
        {
            return i;


        }



    }
return -1;
}

int main ()
{
   int item,n;
   int a[] = {3,5,4,2,6,7,4,2};
    n = sizeof(a) / sizeof(a[0]);

   int index = linear (a,n,item);

   if (index == -1)
   {
       cout<<"Element is not found."<<endl;
   }

   else{
    cout<<"Element fount at Array position : "<<index;
   }

}
