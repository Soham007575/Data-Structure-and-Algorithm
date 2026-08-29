class Solution {
public:
    int reverse(long long x) {

        long long revnum=0;
        int sign =1;

        if(x<0){
            sign=-1;
            x=-x;
        }
        

        while(x>0){
            int lastdigit= x%10;
            revnum=(revnum*10)+lastdigit;
            x=x/10;
        }

        revnum=sign*revnum;
        if (revnum > INT_MAX || revnum < INT_MIN) {
        return 0;
    }
        

        return revnum;
        
        
    }
};