class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n=nums.size();

        // BFS approach o(n^2)

        // for ( int i= 0 ; i < n ; i++){
        //     int freq = 0;

        //     for( int j=0; j< n ; j++){

        //         if( nums[i]==nums[j] ){

        //             freq++;


        //         }
        //         if(freq>n/2){

        //             return nums[i];
        //         }

        //     }
        // }
        // return -1;


        //Sorting Approach  o(logn)
        // sort(nums.begin(),nums.end());

        // int freq=1, ans = nums[0];

        // for ( int i= 1; i<n ; i++){

        //     if( nums[i]==nums[i-1]){
        //         freq+=1;
        //     }
        //     else{
        //         freq=1;
        //         ans= nums[i];

        //     }

        //     if(freq>n/2){
        //         return ans;
        //     }
        // }
        // return ans;

        // Moors Algorithm o(n)

        int freq=0, ans=0;
        for( int i = 0 ;i< n ; i++){
            if(freq == 0){
                ans=nums[i];
            }

            if(ans==nums[i]){
                freq++;
            }
            else{
                freq--;
            }
        }
        return ans;

        
    }
};