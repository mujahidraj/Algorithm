#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n;

bool flag = true;
cout<<"Enter an Integer : ";
cin>>n;
    for(int i = 2 ; i<=n/2 ; ++i)

    {
       if(n%i==0 )
       {
           flag = false;
           break;
       }
    }


 if (flag )
 {
     cout<<n<<" is a Prime number"<<endl;
 }
     else {cout<<n<<" is a not Prime number"<<endl;}


return 0;
}
