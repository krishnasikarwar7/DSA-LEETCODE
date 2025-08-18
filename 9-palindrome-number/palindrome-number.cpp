class Solution {
public:
    bool isPalindrome(int x) {
        int digit;
        int orig=x;
        long rev=0;
        if(x<0)
        {
          return false;
        }
        while(x!=0)
        {
            digit=x%10;
            rev=rev*10 + digit;
            x/=10;
        }
        if(rev==orig)
        {
        return true;
        }
        return false;
    
    }
};