class Solution {
public:
    double findMedianSortedArrays(vector<int>& n1, vector<int>& n2) {
        int n=n1.size();
        int m=n2.size();
        int i=0;
        int j=0;
        int m1=0;
        int m2=0;
        for(int cnt=0;cnt<=((n+m)/2);cnt++){
            m2=m1;
            if(i!=n && j!=m){
                if(n1[i]>n2[j]) m1=n2[j++];
                else m1=n1[i++];
            }else if(i<n) m1=n1[i++];
            else m1=n2[j++];
        }
        if((n+m)%2==1) return (double)m1;
        else{
            double res=(double)(m1+m2);
            return res /2.0;
        }
    }
};