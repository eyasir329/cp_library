// good segment technique (decreasing)

// have to be contiguous

// using two pointer O(2N)<->O(N)

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k;
  vector<int> a(n);
  int ans = INT_MAX, sum = 0;

  int i = 0, j = 0;

  while (j < n)
  {
    sum += a[j];                // include the jth element
    while (i <= j and sum >= k) // move left pointer one step right
    {
      ans = min(ans, j - i + 1); // update ans
      sum -= a[i];               // removing a[i]
      i++;
    }
    j++; // move right pointer one step right
  }
  return 0;
}