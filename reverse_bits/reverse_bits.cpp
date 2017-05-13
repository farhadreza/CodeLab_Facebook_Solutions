unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    unsigned int result=A;
    unsigned int temp1;
    unsigned int temp2;
    if(A==0)
       return result;
   // if(A== (int)(pow(2,32))-1)
   //    return result;
    if(A == 4294967295)
       return A;
    for(unsigned int i=0;i<16;++i)
    {
        
        temp1 = A & (1U<<i);
        temp2=  A & (1U<<(32-i-1));
        
       // if(temp1 && temp2)
       //  if(temp1 && temp2)
         if( (temp1 && !temp2) || (!temp1 && temp2))
        {
          
            result = result ^ (1U<<i);
            result = result  (1U<<(32-i-1));
        }
     //   temp1=0;
      //  temp2=0;
    }
    return result;
}
