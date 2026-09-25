class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int val : nums){
            ans ^= val;  // bitwise operator XOR use in it
        }
        return ans;
        
    }
};