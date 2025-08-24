class Solution {
public:

    int func(int n){
        int m = 0;
        while(n!=0){
            int num = n%10;
            m += num*num;
            n = n/10;
        }
        return m;
    }
    
    bool isHappy(int n) {
        unordered_set<int> set;
        while(n!=1 && !set.count(n)){
            set.insert(n);
            n = func(n);
        }
        return n==1;
    }
};