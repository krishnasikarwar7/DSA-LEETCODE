class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int c=0;
        unordered_map<char,int> map;

        for(char s: stones)
        {
            map[s]++;
        }

        for(char j : jewels) {
            if(map.count(j)) {
                c += map[j];
            }
        }

        return c;
    }
};