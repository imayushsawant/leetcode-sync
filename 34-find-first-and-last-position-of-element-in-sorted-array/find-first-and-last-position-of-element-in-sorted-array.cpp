class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> indexes;
        int low = 0;
        int high = nums.size() - 1;
        int mid = low + (high - low) / 2;
        int lastIndex = -1, firstIndex = -1;
        while (low <= high) { // search1 discard the right side
            if (nums[mid] < target) {
                low = mid + 1;
            }
            if (nums[mid] > target) {
                high = mid - 1;
            }
            if (nums[mid] == target) {
                if(mid==0){
                    firstIndex = mid;
                    low = mid;
                    break;
                }
                if (mid>0 && nums[mid - 1] != target) {
                    firstIndex = mid;
                    low = mid;
                    break;
                }
                high = mid - 1;
            }
            mid = low + (high - low) / 2;
        }
        high = nums.size() - 1;
        mid = low + (high - low) / 2;

        while (low <= high) { // search2 discard the left side
            if (nums[mid] < target) {
                low = mid + 1;
            }
            if (nums[mid] > target) {
                high = mid - 1;
            }
            if (nums[mid] == target) {
                if(mid==nums.size()-1){
                    lastIndex = mid;
                    break;
                }
                if (mid<nums.size()-1 && nums[mid + 1] != target) {
                    lastIndex = mid;
                    break;
                }
                low = mid + 1;
            }
            mid = low + (high - low) / 2;
        }
        indexes.push_back(firstIndex);
        indexes.push_back(lastIndex);
        return indexes;
    }

};