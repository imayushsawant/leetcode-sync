class Solution {
public:
    bool check(vector<int>& nums) {
        bool rotated = false;
        bool sorted = true;
        int IP = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] <= nums[i + 1]) {
                continue;
            }
            IP = i + 1;
            rotated = true;
        }
        if (!rotated)
            return true;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (IP == nums.size() - 1) {
                if (nums[IP] <= nums[0]) {
                    IP = 0;
                    continue;
                }
                sorted = false;
            }else if (nums[IP] <= nums[IP + 1]) {
                IP++;
                continue;
            } else {
                sorted = false;
            }
        }
        return sorted;
    }
};