class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> rec;
        
        for(int x = 0 ; x < nums.size() ; x++){
            int k = target - nums[x];
            if(rec.count(k)) return {rec[k] , x};
            rec[nums[x]] = x;
        }
        return {};
    }
};
