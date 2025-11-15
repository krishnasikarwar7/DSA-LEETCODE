class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;

        for(auto c:operations)
        {
            if(c=="+")
            {
                int n=ans.size();
                ans.push_back(ans[n-1]+ans[n-2]);
            }
            else if(c=="D")
                ans.push_back(2*ans.back());
            else if(c=="C")
                ans.pop_back();
            else 
                ans.push_back(stoi(c));
        }

        int sum=0;
        for(int i:ans)
        {
            sum+=i;
        }

        return sum;
    }
};