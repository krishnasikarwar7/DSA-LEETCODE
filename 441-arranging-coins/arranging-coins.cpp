class Solution {
public:
    int arrangeCoins(int n) {
        long long discriminant = 1LL + 8LL * n;
        long long root = (long long) sqrt((long double) discriminant);
        return (int)((-1 + root) / 2);
    }
};
