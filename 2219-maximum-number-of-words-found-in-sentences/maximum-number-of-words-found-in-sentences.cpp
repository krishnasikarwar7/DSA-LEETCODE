class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        vector<int> res;
        int c=0;
        for(auto &v:sentences)
        {
            c=0;
            for(int i=0;i<v.length();i++)
            {
                if(v[i]==' ')
                    c++;
            }
            res.push_back(c+1);
        }
        return *max_element(res.begin(),res.end());
    }
};