int Solution::titleToNumber(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int sum=0;
    
    for(int i=0; i<A.length(); i++)
    {
      //  sum+= (A[i]-65)+ (int) pow (26.0, A.length()-i-1) * (A[i]-65+1);
        sum+= ((int) pow (26.0,(double)i)) * (A[A.length()-i - 1] - 'A' + 1);
    }
    
    return sum;
}
