class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int r=bank.size();
        int c=bank[0].size();
        vector<int> cnt;
        int sc=0;
        for(int i=0;i<r;i++)
        {
            sc=0;
            for(int j=0;j<c;j++)
            {
                if(bank[i][j]=='1')
                {
                    sc++;
                }
            }
            if(sc>0) cnt.push_back(sc);
        }

        int beams=0;

        for(int i=1;i<cnt.size();i++)
        {
            beams+=cnt[i-1]*cnt[i];
        }

        return beams;
    }
};