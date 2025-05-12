class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        for(int i = 0 ; i < nums.size();i++){
            if(i > 0 && nums[i] == nums[i - 1]){
                continue;
            }
            for(int j = i + 1; j < nums.size() - 1;j++){
                long long k = j + 1, l = nums.size() - 1;
                if(j > i + 1 && nums[j] == nums[j - 1]){
                    continue;
                }
                while(k < l){
                    vector<int> tmp;
                    long long total = 1ll * nums[i] + nums[j] + nums[k] + nums[l];
                    if(total == target){
                        tmp.push_back(nums[i]);
                        tmp.push_back(nums[j]);
                        tmp.push_back(nums[k]);
                        tmp.push_back(nums[l]);
                        v.push_back(tmp);
                        k++;
                        l--;
                        while(k < l && nums[k] == nums[k - 1]){
                            k++;
                        }
                        while(l > 0 && nums[l] == nums[l + 1]){
                            l--;
                        }
                    }
                    else if(total < target){
                        k++;
                    }
                    else l--;
                }
            }
        }
        return v;
    }
};
