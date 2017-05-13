int Solution::diffPossible(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    enum ans{NO,YES};
    
    if(A.size()<2 || B<0)
       return NO;
       
     for(int i=0;i<A.size();i++)
     {
         int temp1=A[i]-B;
         int temp2=A[i]+B;
         if((std::find(A.begin()+i+1,A.end(), temp1)!=A.end()) || 
              (std::find(A.begin()+i+1,A.end(), temp2 )!=A.end()))
           return YES;
       /*  if((std::find(A.begin(),A.end(), temp1)!=A.end()))  
             return YES;
        if((std::find(A.begin(),A.end(), temp2)!=A.end()))  
             return YES;*/
     }
     return NO;
}
