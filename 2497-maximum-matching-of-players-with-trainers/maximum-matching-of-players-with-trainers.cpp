class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int p=players.size(),t=trainers.size();
        int c=0;
        int i=0,j=0;

        while(i<p && j<t)
        {
            if(j<t && players[i]<=trainers[j] )
            {
                c++;
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }

        return c;
    }
};