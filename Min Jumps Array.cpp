int Solution::jump(vector<int> &A) {
    int len = A.size(), count = 0, pos = 0;
    // At each index update rightmost index that can be reached
    for(int i=1; i<len; i++) 
        A[i] = max(i+A[i], A[i-1]);
    while(pos < len-1) {
        if(pos >= A[pos])    return -1;
        if(pos < A[pos]) {
            count++;
            pos = A[pos];
        }
    }
    return count;
}
/*https://www.interviewbit.com/problems/min-jumps-array/*/
