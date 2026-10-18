class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<=nums.size()-1;i++){
            int nn=target-nums[i];
            if(mp.find(nn)!=mp.end()){
                return {mp[nn],i};
            }
            mp[nums[i]]=i;
        }
        return{};
    }
};