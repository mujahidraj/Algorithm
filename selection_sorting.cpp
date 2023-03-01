#include<iostream>
using namespace std;
int main ()
{
    int n;

    cout<<"Enter Array Size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Element: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
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

for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
return 0;}
