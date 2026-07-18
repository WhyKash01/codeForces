#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int, int>
#define fr first
#define sc second
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int, int>>
#define pb push_back
#define ppb pop_back
#define inp(v)        \
    for (auto &x : v) \
        cin >> x;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
int MOD = 1e9 + 7;

bool check(int x, int n, const vector<int>& a, const vector<int>& b) {
    vector<int> v(n);
    vector<int> v1;
    for (int i = 0; i < n; i++) {
        v[i] = (a[i] >= x) + (b[i] >= x); 
        if (v[i] == 2) {
            v1.push_back(i);
        }
    }
    int p=0,q=0,r=0;
    int k=v1.size();
    if (k==0){
        return false;
    }
    for (int i = 0; i < v1[0]; i++) {
        if (v[i] == 0) {
            p = 1;
            break;
        }
    }
    for (int i = v1[k-1]; i < n; i++) {
        if (v[i] == 0) {
            q = 1;
            break;
        }
    }
    for (int j = 0; j < k - 1; j++) {
        bool z = false;
        for (int i = v1[j]+1; i<v1[j+1]; i++) {
            if (v[i]==0) {
                z=true;
                break;
            }
        }
        if (z){
            r++;
        }
    }
    int curr =p+q+r;
    return k > curr;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    vector<int> v;
    map<int,int>m ;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(m[a[i]]==0){
            m[a[i]]++;
            v.push_back(a[i]);
        }
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        if(m[b[i]]==0){
            m[b[i]]++;
            v.push_back(b[i]);
        }
    }
    sort(v.begin(), v.end());
    int low=0, high=v.size()-1;
    int ans=v[0];
    while (low<=high) {
        int mid = low + (high - low) / 2;
        if (check(v[mid], n, a, b)){
            ans = v[mid]; 
            low = mid+1;
        } else{
            high=mid-1;
        }
    }
    cout<<ans<<endl;
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