class Solution {
public:
    string binary(int n)
    {
        if(n==0) return "0";
        
        string res="";
        while(n>0)
        {
            res.push_back((n%2)+'0');
            n/=2;
        }
        reverse(res.begin(),res.end());
        return res;
    }
    string convertDateToBinary(string date) {
        int yr=stoi(date.substr(0,4));
        int mo=stoi(date.substr(5,2));
        int da=stoi(date.substr(8,2));

        string y=binary(yr);
        string m=binary(mo);
        string d=binary(da);
        return y+'-'+m+'-'+d;
    }
};