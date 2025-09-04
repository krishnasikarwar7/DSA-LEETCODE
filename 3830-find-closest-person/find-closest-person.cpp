class Solution {
public:
    int findClosest(int x, int y, int z) {
        int i=x,j=y;
        while(i!=z && j!=z)
        {
            if(i<z && j<z)
            {
                i++;
                j++;
            } 
            else if(i<z && j>z)
            {
                i++;
                j--;
            } 
            else if(i>z && j>z)
            {
                i--;
                j--;
            } 
            else
            {
                i--;
                j++;
            }
        }
        
        if(i==z && j==z) return 0;
        else if(j==z) return 2;
        else return 1;
    }
};