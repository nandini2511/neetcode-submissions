class Solution {
public:
    //time - O(m * nlogn), space - O(m * n)
    //hashmap with sorted string as key

    // vector<vector<string>> groupAnagrams(vector<string>& strs) {
    //     unordered_map<string, vector<string>> sorted_map;

    //     for (int i = 0; i < strs.size(); i++) {
    //         string sorted_s = strs[i];
    //         std::sort(sorted_s.begin(), sorted_s.end());
    //         sorted_map[sorted_s].push_back(strs[i]);
    //     }

    //     vector<vector<string>> res; ---> final result
    //     for (auto& [sort, st]: sorted_map) {
    //         res.push_back(st);
    //     }
    //     return res;
    // }

    //time - O(m * n), space - O(m)
    //hashmap 

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> freq_map;
        for (const auto& s: strs) {
            vector<int> count(26, 0);
            for (char c: s) {
                count[c - 'a']++;
            }
            string key = to_string(count[0]);
            for (int i = 1; i < 26; i++) {
                key += ',' + count[i];
            }
            freq_map[key].push_back(s);
        }

        vector<vector<string>> result;
        for (const auto& it: freq_map) {
            result.push_back(it.second);
        }
        return result;        
    }
};
