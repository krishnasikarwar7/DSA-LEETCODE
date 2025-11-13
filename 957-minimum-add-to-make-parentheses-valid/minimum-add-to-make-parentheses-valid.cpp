class Solution {
public:
    int minAddToMakeValid(string s) {
        int bal=0,ins=0;

        for(char c:s)
        {
            if(c=='(')
                bal++;
            else
            {
                if(bal>0)
                    bal--;
                else
                    ins++;
            } 
        }

        return bal+ins;
    }
};