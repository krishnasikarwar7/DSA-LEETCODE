class Solution {
public:
    void subseq(int index, vector<int>& candidates, vector<int>& newa,
                vector<vector<int>>& result, int target, int sum) {
        if (sum>target)
            return;

        if (index==candidates.size()) {
            if (sum==target)
                result.push_back(newa);
            return;
        }
        newa.push_back(candidates[index]);
        subseq(index+1,candidates,newa,result,target,sum + candidates[index]); 
        newa.pop_back();
        int next=index+1;
        while(next<candidates.size() && candidates[next]==candidates[index])
        {
            next++;
        }
        subseq(next,candidates,newa,result,target,sum); 
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {\
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> result;
        vector<int> newa;
        int sum=0;
        subseq(0,candidates,newa,result,target,sum);
        return result;
    }
};