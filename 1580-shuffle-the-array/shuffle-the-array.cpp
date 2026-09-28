class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        vector <int> ans;

        n=nums.size();
        int mid=n/2;
        for(int i=0 ; i < mid ; i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[mid+i]);
        }
        return ans;
        
    }
};