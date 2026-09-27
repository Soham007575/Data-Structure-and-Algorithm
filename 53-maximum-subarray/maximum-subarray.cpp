class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        // Kadanes Algorithm put - ve ans = 0

        int maxSum = INT_MIN;
        int currentSum = 0;

        for (int value : nums) {
            currentSum += value;
            maxSum = max(currentSum, maxSum);
            if (currentSum < 0) {
                currentSum = 0;
            }
        }

        return maxSum;



 // BFS Approach 



//         int maxSum=INT_MIN;
//         int n=nums.size();
//         for(int start=0;start<n ; start++){
//             int currentSum=0;

//             for(int end=start ; end < n ; end++){
//                 currentSum+=nums[end];
//                maxSum=max(maxSum,currentSum);


            
//             }
//         }
//         return maxSum;
    }
};