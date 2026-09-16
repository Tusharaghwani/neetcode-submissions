class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> arr;

        for (int x : nums) {

            if (arr.count(x)) {
                return true;
            }

            arr.insert(x);
        }

        return false;
    }
};