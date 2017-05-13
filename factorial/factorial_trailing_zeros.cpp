int Solution::trailingZeroes(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A==0)
       return 0;
    int zero_c=0;
    
    /*int fact=1;
    
    for(int i=A;i>=1;i--)
    {
     if(fact*i < INT_MAX)
       fact*=i;
    }
    */
    while(A>=1)
    {
        zero_c+= (int) (A/5);
        
        A/=5;
        
    }
    return zero_c;
}
