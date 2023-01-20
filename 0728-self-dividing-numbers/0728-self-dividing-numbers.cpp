class Solution {
public:
    bool valid(int num){ //Function to check whether the no is self dividing or not)
    int n=num, rem;
    while(n!=0){
        rem=n%10;
        if(rem==0 || num%rem!=0)
            return false;
        n/=10;
    }
    return true;  
}
    vector<int> selfDividingNumbers(int left, int right) {
    vector<int> res;
    
    for(int i=left;i<=right;i++)  
        if(valid(i))
            res.push_back(i);  // append the no. which is self divided
    return res;
}
};
