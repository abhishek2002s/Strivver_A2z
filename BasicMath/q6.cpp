
#include<bits/stdc++.h>

using namespace std;

//check prime number

bool isPrime(int N) {
  for (int i = 2; i < sqrt(N); i++) {
    if (N % i == 0) {
      return false;
    }
  }
  return true;
}
int main() {

  int n = 11;

  bool ans = isPrime(n);
  if (n != 1 && ans == true) {
    cout << "Prime Number";
  } else {
    cout << "Non Prime Number";
  }
  return 0;
}