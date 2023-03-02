#include<bits/stdc++.h>
#include<math.h>
using namespace std ;

int main() }{

    int n, i, m=0, flag=0;
  cout << "Enter the Number to check Prime: ";
  cin >> n;

  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    cout << n << " is a prime number";
  else
    cout << n << " is not a prime number";




return 0;
}
