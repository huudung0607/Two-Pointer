class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<pair<int,int>> res;
       vector<int> val;
       unordered_map<int,int>mp;
       for(int i = 0 ; i < nums.size();i++){
            int val = target - nums[i];
            if(mp.find(val) != mp.end()){
                res.push_back({mp[val],i});
            }
            mp[nums[i]] = i;
       }
       for(auto x : res){
        val.push_back(x.first);
        val.push_back(x.second);
       }
       return val;
    }
};
