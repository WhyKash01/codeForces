#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring> // For memcmp

using namespace std;

// Custom struct to represent substrings efficiently without allocating memory.
// It stores a pointer to the original string's character and the length.
struct Sub {
    const char* str;
    int len;
    int word_id;
    
    // Sort alphabetically, and group identical substrings by their origin word
    bool operator<(const Sub& o) const {
        int min_len = len < o.len ? len : o.len;
        int cmp = memcmp(str, o.str, min_len);
        if (cmp != 0) return cmp < 0;
        if (len != o.len) return len < o.len;
        return word_id < o.word_id;
    }
    
    bool operator==(const Sub& o) const {
        if (len != o.len) return false;
        return memcmp(str, o.str, len) == 0;
    }
};

void findMostRecurrentSequences(int N, const vector<string>& keywords) {
    vector<Sub> subs;
    // Pre-allocate vector size to prevent dynamic reallocation lag
    subs.reserve(2000000); 
    
    // 1. Generate all possible string views (minimum length 3)
    for (int w = 0; w < N; ++w) {
        const string& word = keywords[w];
        int len = word.length();
        for (int i = 0; i < len; ++i) {
            for (int j = i + 2; j < len; ++j) {
                subs.push_back({word.data() + i, j - i + 1, w});
            }
        }
    }
    
    // 2. Sort to easily find and group duplicates
    sort(subs.begin(), subs.end());
    
    vector<string> result;
    int n = subs.size();
    
    // 3. Iterate through sorted substrings to find patterns in multiple keywords
    for (int i = 0; i < n; ) {
        int j = i;
        int unique_words = 0;
        int last_word = -1;
        
        while (j < n && subs[j] == subs[i]) {
            if (subs[j].word_id != last_word) {
                unique_words++;
                last_word = subs[j].word_id;
            }
            j++;
        }
        
        // Output condition: Sequence must appear in at least 2 distinct keywords
        if (unique_words >= 2) {
            result.push_back(string(subs[i].str, subs[i].len));
        }
        
        i = j; // Jump ahead past this grouped subset
    }
    
    // 4. Print correctly formatted output
    if (!result.empty()) {
        for (size_t i = 0; i < result.size(); ++i) {
            cout << result[i] << (i == result.size() - 1 ? "" : " ");
        }
        cout << "\n";
    }
}

int main() {
    // Standard I/O optimization
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;
    
    // Safely reads strictly N words, bypassing unexpected space formatting
    vector<string> keywords(N);
    for(int i = 0; i < N; ++i) {
        cin >> keywords[i];
    }

    findMostRecurrentSequences(N, keywords);

    return 0;
}