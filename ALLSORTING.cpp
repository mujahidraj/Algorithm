#include<bits/stdc++.h>

using namespace std;


void printListselection(int *A, int n)
{
    for (int i = 0; i< n; i++)
    {
        cout << A[i] << endl;
    }
}

void printListmarge(int *A, int n)
{
    for (int i = 0; i< n; i++)
    {
        cout << A[i] << endl;
    }
}

int LinearSearch(int *A, int n)
{
    int item;
    cout<<"Enter the Number to be searched: ";
    cin  >> item;
    for(int i = 0; i<n-1;i++)
    {
        if(A[i] == item )
        {
            return i;


        }



    }
return -1;
}


int BinarySearch(int *A, int x,int low,int high ){

while (low<=high){
    int mid =low + (high-low)/2;
    if (A[mid]== x)
        return mid ;
    if(A[mid]<x)
        low=mid+1;
    else
        high=mid-1;
}
    return -1;
}

int selectionsort(int *arr,int n){


    for(int i=0;i<n-1;i++)
    {
        int minimum = i;

        for(int j=i+1;j<n;j++)
        {
           if(arr[j] < arr[minimum])
        {   //minimum = j;
            int value = arr[i];
            arr[i] = arr[j];
            arr[j] = value;

        }
    }

}

}

void mergeList(int *A,int left,int mid,int right)
    {
        int n1 = mid - left+1;
        int n2 = right - mid;


        int *L = new int[n1];
        int *R = new int[n2];
        for(int i=0;i<n1;i++)
        {
            L[i] = A[left+i];
        }

        for(int i=0;i<n2;i++)
        {
            R[i] = A[mid+1+i];
        }
        int i=0,j=0,k=left;
        while(i<n1 && j<n2)
        {
            if(L[i]>R[j]) A[k++] = R[j++];
            else A[k++] = L[i++];
        }
        while(i<n1)
        {
            A[k++] =L[i++];
        }
        while(j<n2)
        {
            A[k++] =R[j++];
        }
    }

    void mergeSort(int *A,int left,int right)
    {
        int mid;
        if(left<right)
        {
            mid = (left+ right) /2;
            mergeSort(A,left,mid);
            mergeSort(A,mid+1,right);
            mergeList(A,left,mid,right);
        }
    }

    void   maxPairWiseNaive(int *a , int n)
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

int main()
{
    int k = 10000;

    int *a = new int[k];

   ifstream fin("10k.txt");
    for(int i = 0; i < k; i++)
    {
        fin >> a[i];

    }

  cout<<"Selection sort"<<endl;
    //selectionsort(a,k);
   // printListselection(a,k);

   cout<<"Marge  sort "<<endl;

    //mergeSort(a,0,k);
    //printListmarge(a,k);

cout<<"linear Search "<<endl;
/*int index = LinearSearch (a,k);

   if (index == -1)
   {
       cout<<"Element is not found."<<endl;
   }

   else{
    cout<<"Element fount at Array position : "<<index;
   }
   */


cout<<"Time counting" <<endl;
    clock_t time_req = clock();
    selectionsort(a,k);
    printListselection(a,k);

     maxPairWiseNaive(a,k);

    int result =BinarySearch(a,5000,0,k-1);

   if (result==-1){

    cout<<"No such Element found"<<endl;

   }
   else
   {
   cout<<"NUmber found in : "<<result<<endl;
   }



    time_req=clock()-time_req;
    cout<<endl<<"Time needed :"<<(float)time_req/CLOCKS_PER_SEC<<"seconds"<<endl;


    return 0;
}
