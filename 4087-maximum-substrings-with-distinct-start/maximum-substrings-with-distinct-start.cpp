class Solution {
public:
    int maxDistinct(string s) {
        vector<bool> visited(26,false);
        int c=0;
        for(char ch:s)
        {
            int in =ch-'a';
            if(!visited[in])
            {
                visited[in]=true;
                c++;
            }
        }
        return c;
    }
};