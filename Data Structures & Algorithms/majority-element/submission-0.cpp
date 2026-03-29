class Solution {
public:

    //1. brute force -> iterate over the array n times, count occurrences (n2)
    //2. hashmap to keep count (time - O(n), space - O(n))
    //3. sorting (time - O(nlogn), space can vary depending on sorting algo)
    //4. bit manipulation -> NEED TO LEARN
    
    //5. Bayer-Moore Voting Algorithm
    int majorityElement(vector<int>& nums) {
        int res = 0, count = 0;
        for (int num: nums) {
            if (count == 0) res = num;
            count += (num == res) ? 1 : -1;
        }
        return res;
    }

    //6. randomization
    // int majorityElement(vector<int>& nums) {
    //     int n = nums.size();

    //     while (true) {
    //         int candidate = nums[rand() % n];
    //         int count = 0;
    //         for (int i: nums) {
    //             if (i == candidate) count++;
    //             if (count > n / 2) return candidate;
    //         }
    //     }
    // }
};