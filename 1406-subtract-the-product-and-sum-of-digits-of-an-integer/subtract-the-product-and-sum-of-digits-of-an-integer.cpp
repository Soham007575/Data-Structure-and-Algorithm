class Solution {
public:
int sum=0;
int multi=1;
    int subtractProductAndSum(int n) {
        int d;
        if(n==0){
            return multi-sum;
        }
        d=n%10;
        sum+=d;
        multi*=d;

        return subtractProductAndSum(n/10);

        
    }
};