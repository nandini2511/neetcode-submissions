class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> sorted_map;

        for (int i = 0; i < strs.size(); i++) {
            string sorted_s = strs[i];
            std::sort(sorted_s.begin(), sorted_s.end());
            sorted_map[sorted_s].push_back(strs[i]);
        }

        vector<vector<string>> res;
        for (auto& [sort, st]: sorted_map) {
            res.push_back(st);
        }
        return res;
    }
};
