#include<iostream>
using namespace std;


void printList(int *p,int s)
   {


    for(int i=0;i<s;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
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


int main()
{
    int a[] = {89,2,45,6,2,1000,30};
    printList(a,7);

    mergeSort(a,0,6);
    printList(a,7);

    return 0;

}
