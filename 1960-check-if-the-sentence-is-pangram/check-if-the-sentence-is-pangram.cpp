class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.length()<26) return false;

        vector<int> arr(26,0);

        for(char c:sentence)
        {
            if(c>='a' && c<='z')
            {
                arr[c-'a']++;
            }
        } 

        for(int n:arr)
        {
            if(n==0) return false;
        }

        return true;
    }
};