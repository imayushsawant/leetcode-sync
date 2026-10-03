class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> LessThanPivot;
        vector<int> EqualToPivot;
        vector<int> GreaterThanPivot;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                LessThanPivot.push_back(nums[i]);
            }
            if(nums[i]>pivot){
                GreaterThanPivot.push_back(nums[i]);
            }
            if(nums[i]==pivot){
                EqualToPivot.push_back(nums[i]);
            }
        }

        vector<int> result;
        for(int i=0; i<LessThanPivot.size();i++){
            result.push_back(LessThanPivot[i]);
        }
        for(int i=0; i<EqualToPivot.size();i++){
            result.push_back(EqualToPivot[i]);
        }
        for(int i=0; i<GreaterThanPivot.size();i++){
            result.push_back(GreaterThanPivot[i]);
        }

        return result;

    }
};