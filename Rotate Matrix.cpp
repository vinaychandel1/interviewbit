void Solution::rotate(vector<vector<int> > &A) {
    for(int i=0;i<A.size();i++)
    for(int j=i+1;j<A.size();j++)
    swap(A[i][j],A[j][i]);
    for(int i=0;i<A.size();i++)
    for(int j=0;j<A.size()/2;j++)
    swap(A[i][j],A[i][A.size()-1-j]);
}

/*
step 1: Take transpose of array
Step 2: Reverse Every Row
*/

/*https://www.interviewbit.com/problems/rotate-matrix/*/
