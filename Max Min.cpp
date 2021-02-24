int Solution::solve(vector<int> &A) {
    int n = A.size();
    sort(A.begin(),A.end());
    return A[n-1]+A[0];
}

/*https://www.interviewbit.com/problems/max-min-05542f2f-69aa-4253-9cc7-84eb7bf739c4/*/
