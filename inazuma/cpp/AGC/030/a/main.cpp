#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  if(c > b + a) cout << (b + a) + b + 1 << endl;
  else if(c > b) cout << b + c << endl;
  else cout << c + b << endl;

}
