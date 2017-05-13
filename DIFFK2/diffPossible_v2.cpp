int Solution::diffPossible(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    for(int i=0;i<A.size();i++)
    {
       /* if(A[i]<=B)
           continue;
         else
         {*/
              for(int j=i+1;j<A.size();j++)
              {
                  if(abs(A[i]-A[j])==B)
                    return 1;
              }
       //  }
    }
    return 0;
}
