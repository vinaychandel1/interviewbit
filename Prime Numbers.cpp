vector<int> Solution::sieve(int n) {
    vector prime(n,false);
    vector <int> ans;
    if(n<2){
        
    }
    
    for(int i = 2 ; i*i < n ; i++){
        for(int j = i*i ; j < n ; j += i){
            prime[j] = true;
        }
    }
    for(int i = 2 ; i < n ; i++){
        if(prime[i] == false)
            ans.push_back(i);
    }
    return ans;
    
}
/*https://www.interviewbit.com/problems/prime-numbers/*/
