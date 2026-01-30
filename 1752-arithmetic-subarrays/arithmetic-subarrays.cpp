class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int m=l.size();
        vector<bool> res(m,true);
        for(int i=0;i<m;i++)
        {
            vector<int> temp;
            for(int j=l[i];j<=r[i];j++)
            {
                temp.push_back(nums[j]);
            }

            sort(temp.begin(),temp.end());

            int diff=temp[1]-temp[0];
            for(int k=2;k<temp.size();k++)
            {
                if(temp[k]-temp[k-1]!=diff)
                {
                    res[i]=false;
                    break;
                }
            }
        }
        return res;
    }
};