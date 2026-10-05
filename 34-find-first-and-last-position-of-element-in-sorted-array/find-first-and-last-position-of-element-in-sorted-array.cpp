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
                firstIndex = mid;
                high = mid - 1;
            }
            mid = low + (high - low) / 2;
        }
        high = nums.size() - 1;
        low=0;
        mid = low + (high - low) / 2;
        if(firstIndex==-1){
        indexes.push_back(firstIndex);
        indexes.push_back(lastIndex);
        return indexes;
        } 
        while (low <= high) { // search2 discard the left side
            if (nums[mid] < target) {
                low = mid + 1;
            }
            if (nums[mid] > target) {
                high = mid - 1;
            }
            if (nums[mid] == target) {
                lastIndex = mid;
                low = mid + 1;
            }
            mid = low + (high - low) / 2;
        }
        indexes.push_back(firstIndex);
        indexes.push_back(lastIndex);
        return indexes;
    }

};