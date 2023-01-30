
// Recursion in C++

#include<iostream>
using namespace std;

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

int main() {
  for(int i=0; i<1000000; i++)
  {
      cout<<sum(100)<<"\n";
      }
  return 0;
}
