#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int l = s.size();
    vector<pair<int, char>> pairs;
    int arr[l];
    int count = 0;

    for (int i = 0; i < l; i++)
    {
        arr[i] = count;
        pairs.push_back({count, s[i]});

        if (s[i] == '(')
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    count = 0;
    int c = 0;
    int max = 0;
    vector<int> temp;
    vector<pair<int, vector<int>>> index;
    index.push_back(make_pair(0, temp));

    for (int i = 0; i < l; i++)
    {
        if (pairs[i].first > max)
        {
            index.push_back(make_pair(pairs[i].first, temp));
            max++;
        }
        index[pairs[i].first].second.push_back(i);
    }
    for (int i = 0; i < index.size(); i++)
    {
        for (int j = index[i].second.size() - 1; j >= 0; j--)
        {
            cout << pairs[index[i].second[j]].second;
        }
    }
}