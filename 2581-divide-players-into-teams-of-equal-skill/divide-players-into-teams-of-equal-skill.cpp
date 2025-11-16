class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        long long ans=0;
        int n=skill.size();
        int target=skill[0]+skill[n - 1];

        int l=0, r=n-1;
        while (l<r) {
            if (skill[l]+skill[r] !=target)
                return -1;
            ans+= 1LL*skill[l]*skill[r];
            l++;
            r--;
        }
        return ans;
    }
};