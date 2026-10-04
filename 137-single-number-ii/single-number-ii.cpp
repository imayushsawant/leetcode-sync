class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int single;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();){
            if(i<nums.size()-1 && nums[i]==nums[i+1]) i+=3;
            else{
                single=nums[i];
                break;
            }
        }
        return single;
    }
};