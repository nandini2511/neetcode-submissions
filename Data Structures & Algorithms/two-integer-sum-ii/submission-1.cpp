class Solution {
public:
    //1. binary search - O(nlogn)
    //2. hashmap (store seen elements) - time & space - O(n)
    //3. two pointers - O(n)
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
