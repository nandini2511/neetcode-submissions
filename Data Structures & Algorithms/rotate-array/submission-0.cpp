class Solution {
public:
    
    //1. shift entire array one place at a time k times
    //2. compute new positions and store them in temp array then copy back
    //3. cyclic traversal -?
    //4. USING REVERSE - reverse full array, then reverse (1 to k) and (k+1 to n)
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;

        reverse(nums, 0, n - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, n - 1);
    }

private: 
    void reverse(vector<int>& nums, int i, int j) {
        while (i < j) {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
};