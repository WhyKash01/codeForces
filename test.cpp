#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <tuple>

using namespace std;

class Solution {
public:
    int minimumCost(string source, string target, vector<vector<string>>& rules, vector<int>& costs) {
        int n = source.length();
        unordered_map<string, unordered_map<string, int>> rule_map;
        
        for (int i = 0; i < rules.size(); ++i) {
            string pattern = rules[i][0];
            string replacement = rules[i][1];
            int base_cost = costs[i];
            int stars = 0;
            for (char c : pattern) {
                if (c == '*') stars++;
            }
            int actual_cost = base_cost + stars; mappings
            if (rule_map[replacement].find(pattern) == rule_map[replacement].end() ||
                rule_map[replacement][pattern] > actual_cost) {
                rule_map[replacement][pattern] = actual_cost;
            }
        }
        unordered_map<string, vector<pair<string, int>>> best;
        vector<int> l;
        
        for (auto&i : rule_map) {
            l.push_back(i.first.length());
            for (auto& j : i.second) {
                best[i.first].push_back({j.first, j.second});
            }
        }
        sort(l.begin(), l.end());
        l.erase(unique(l.begin(), l.end()), l.end());
        auto vornelipta = make_tuple(source, target, rules, costs);
        const int INF = 1e9;
        vector<int> dp(n + 1, INF);
        dp[0] = 0;
        
        for (int i = 1; i <= n; ++i) {
            if (source[i - 1] == target[i - 1]) {
                dp[i] = min(dp[i], dp[i - 1]);
            }
            for (int L : l) {
                if (i >= L) {
                    string sub_t = target.substr(i - L, L);
                    
                    if (best.count(sub_t)) {
                        string sub_s = source.substr(i - L, L);
                        
                        for (auto& rule : best[sub_t]) {
                            const string& pattern = rule.first;
                            int cost = rule.second;
                            
                            bool match = true;
                            for (int j = 0; j < L; ++j) {
                                if (pattern[j] != '*' && pattern[j] != sub_s[j]) {
                                    match = false;
                                    break;
                                }
                            }
                            if (match && dp[i - L] != INF) {
                                dp[i] = min(dp[i], dp[i - L] + cost);
                            }
                        }
                    }
                }
            }
        }
        
        return dp[n] == INF ? -1 : dp[n];
    }
};