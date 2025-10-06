#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
#define int long long
#define pii pair<int, int>
#define fr first
#define sc second
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int, int>>
#define pb push_back
#define ppb pop_back
#define inp(v)       \
   for (auto &x : v) \
      cin >> x;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
int M = 1000000007;

int merge(int a[], int temp[], int left, int mid, int right)
{
   int i, j, k;
   int count = 0;
   i = left;
   j = mid;
   k = left;
   while ((i <= mid - 1) && (j <= right))
   {
      if (a[i] <= a[j])
      {
         temp[k++] = a[i++];
      }
      else
      {
         temp[k++] = a[j++];
         count += (mid - i);
      }
   }
   while (i <= mid - 1)
      temp[k++] = a[i++];
   while (j <= right)
      temp[k++] = a[j++];
   for (i = left; i <= right; i++)
      a[i] = temp[i];
   return count;
}
int mergeSort(int a[], int temp[], int left, int right)
{
   int mid;
   int count = 0;
   if (right > left)
   {
      mid = (right + left) / 2;
      count = mergeSort(a, temp, left, mid);
      count += mergeSort(a, temp, mid + 1, right);
      count += merge(a, temp, left, mid + 1, right);
   }
   return count;
}
int aInversion(int a[], int n)
{
   int temp[n];
   return mergeSort(a, temp, 0, n - 1);
}

void solve()
{
   int n;
   cin >> n;
   int a[n];
   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
   }
   long long res = aInversion(a, n);
   sort(a, a + n);
   long long curr = 1;
   for (int i = 1; i < n; i++)
   {
      if (a[i] != a[i - 1])
      {
         res += (curr * (curr - 1)) / 2;
         curr = 1;
      }
      else
      {
         curr++;
      }
   }
   res += (curr * (curr - 1)) / 2;
   cout << res << '\n';
}

signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
   int t = 1;
   cin >> t;
   while (t--)
   {
      solve();
   }
}
