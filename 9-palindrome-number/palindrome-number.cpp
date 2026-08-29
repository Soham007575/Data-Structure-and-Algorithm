class Solution {
public:
    bool isPalindrome(long long n) {

        long long revnum = 0;
        long long duplicate = n;

        while (n > 0) {
            int lastdigit = n % 10;
            revnum = (revnum * 10) + lastdigit;
            n = n / 10;
        }

        if (revnum == duplicate) {
            return true;
        }
        else if (revnum != duplicate) {
            return false;
        }

        return false;
    }
};