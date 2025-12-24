class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end());
        reverse(capacity.begin(),capacity.end());
        int totapple=0;
        for(int a:apple)
        {
            totapple+=a;
        }

        int c=0;
        for(int cap:capacity)
        {
            totapple-=cap;
            c++;
            if(totapple<=0) break;
        }

        return c;
    }
};