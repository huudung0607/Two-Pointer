class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        for(int i =0 ; i < nums.size();i++){
            int j = i + 1, k = nums.size() - 1;
            if(i > 0 && nums[i] == nums[i - 1]){
                continue;
            }
           
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                vector<int> tmp;
                if(sum == 0){
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[j]);
                    tmp.push_back(nums[k]);
                    v.push_back(tmp);
                    j++;
                    while(j < k && nums[j] == nums[j - 1]){
                        j++;
                    }
                }
                else if(sum < 0){
                    j++;
                }
                else k--;
            }
        }
        return v;
    }
};
