class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};



























// int n = nums.size();
//         int res = n;
//         for (int i = 0; i < n; i++) {
//             if (nums[i] == val) {
//                 res--;
//             }
//         }
//         return res;