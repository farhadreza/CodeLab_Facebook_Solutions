int Solution::lengthOfLastWord(const string &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

   int count=0;
   int s_len=0;
   int new_count=0;
   
   for(count=0; A[s_len]!='\0';s_len++)
   {
       
      if(A[s_len]==' ')
      {
         continue;
      }
       
       if(A[s_len]!=' ' && A[s_len-1]==' ')
       {
           count=0;
       }
      
         count++;
   }
   return count;
   
   
    
}
