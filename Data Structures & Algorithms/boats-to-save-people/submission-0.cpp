class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int i = 0, j = people.size() - 1;
        int count = 0;

        while (i <= j) {
            int diff = limit - people[j];
            j--;
            count++;
            if ((i <= j) && (people[i] <= diff)) i++;
        }
        return count;
    }
};