class Solution {
public:
    bool isBalanced(string num) {
        int oddsum=0;
        int evensum=0;
        for(int i=0;i<num.length();i++)
        {
            if(i%2!=0)
                oddsum+=num[i]-'0';
            else
                evensum+=num[i]-'0';
        }

        if(oddsum!=evensum) return false;
        return true;
    }
};