class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int i = 0, j = numbers.size() - 1;
        int sum;

        while (i < j) {
            sum = numbers[i] + numbers[j];
            if (sum == target) {
                res.push_back(i + 1);
                res.push_back(j + 1);
                return res;
            }
            else if (sum < target) i++;
            else j--;
        }
    }
};
