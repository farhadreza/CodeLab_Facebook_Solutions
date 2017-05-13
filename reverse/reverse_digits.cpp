int Solution::reverse(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    if(A> INT_MAX || A< INT_MIN)
         return 0;
         
    int result=0;
    
    int sign;
    sign=A<0?-1:+1;
    
    A= sign*A;
    
    while(A>0)
    {
        if (result!=0 && INT_MAX / result < 10
                   && INT_MAX / result > -10)
               return 0;
         
        result= result*10+ A%10;
        
        A/=10;
    }
    
    result=result*sign;
    
  //  if(result> INT_MAX || result< INT_MIN)
   //      return 0;
    
    return result;
    
}
