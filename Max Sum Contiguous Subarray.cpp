int Solution::maxSubArray(const vector<int> &A) {
    int maxsum=INT_MIN,currentsum=0;
    for(int i=0;i<A.size();i++){
        currentsum=currentsum+A[i];
        
        if(maxsum<currentsum){
            maxsum=currentsum;
        }
        if(currentsum<0){
            currentsum=0;
        }
        
    }
    return maxsum;
}
/*Asked in: Facebook
Paypal
Yahoo
Microsoft
LinkedIn
Amazon
Goldman Sachs
*/
