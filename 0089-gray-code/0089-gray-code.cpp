class Solution {
public:
    vector<int> grayCode(int n) {
        
        int iteration = 1;
        int fac = 1;
        vector<int> result{0, 1};

        for( ; iteration < n ; iteration++ ){
            fac = fac*2;
            int l = result.size()-1;
            for( ; l>=0 ; l-- ){
                int val = result[l] + fac;
                result.push_back(val);
            }
        }

        return result;
    }
};
