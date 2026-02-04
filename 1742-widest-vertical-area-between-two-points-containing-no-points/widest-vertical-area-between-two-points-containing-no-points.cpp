class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> s;
        for(int i=0;i<points.size();i++)
        {
            s.push_back(points[i][0]);
        }

        sort(s.begin(),s.end());

        int maxi=INT_MIN;
        for(int i=1;i<s.size();i++)
        {
            if(maxi<abs(s[i]-s[i-1]))
            {
                maxi=abs(s[i]-s[i-1]);
            }
        }   

        return maxi; 
    }
};