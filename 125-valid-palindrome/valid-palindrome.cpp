class Solution {
public:

    bool palindrome(string &s,int i){
        if(i>=s.length()/2) return true;
        if (s[i] != s[s.length() - i - 1]) return false;

        return palindrome(s, i + 1);

    }
    bool isPalindrome(string s) {

        string result="";
        for (char c : s) {
             if (isalnum(c)) result += tolower(c); }
        return palindrome(result, 0);     
        
    }
};