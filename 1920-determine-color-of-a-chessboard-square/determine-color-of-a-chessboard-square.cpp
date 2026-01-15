class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int n1='a'-coordinates[0]+1;
        int n2=coordinates[1];
        int sum=n1+n2;
        if(sum%2==0) return false;
        return true;
    }
};