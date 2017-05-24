int Solution::power(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int count=0;
    int i=0;
  //  double dt= atof(A.c_str());
    long double dt= strtold(A.c_str(),NULL);
    unsigned long long B;
      
    while(dt>(ULLONG_MAX))   
        dt=dt/(ULLONG_MAX);
         
    B= (unsigned long long)dt;
       
    if(B==0)
       return 0;
    if(B==1)
       return 0;
   
    while(B>0)
    {
        B= B& (B-1);
        count++;
    }
    if(count>1)
       return 0;
    return 1;
}
