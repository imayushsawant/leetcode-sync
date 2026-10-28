class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> newArray;
        int n = nums.size();
        k = k%n;
        int iterator = nums.size()-1;
        for(int i = 1 ; i<=k ; i++){
            newArray.push_back(nums[iterator--]);
        }
        reverse(newArray.begin(), newArray.end());
        int remaining  = nums.size()-k;
        for(int i = 0 ; i<remaining ; i++){
            newArray.push_back(nums[i]);
        }
        for(int i = 0 ; i<nums.size() ; i ++){
            nums[i]=newArray[i];
        }
    }
};