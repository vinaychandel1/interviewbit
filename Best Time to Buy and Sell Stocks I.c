/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int maxProfit(const int* A, int n1) {
    int minimum=INT_MAX,profit=0,i;
    for(i=0;i<n1;i++){
        minimum=(A[i]<minimum)?A[i]:minimum;
        profit=(profit<A[i]-minimum)?A[i]-minimum:profit;
    }
    return profit;

}
