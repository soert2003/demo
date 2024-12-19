#include <iostream>
using namespace std;
int main()
{
  int n, total, left = 0;
  cin >> n;
  while(n > 0) {
    total += n;
    left += n % 3;
    n /= 3;
  }
  total += left / 3;
  cout << total <<endl;
  cin.get();
  return 0;
}
