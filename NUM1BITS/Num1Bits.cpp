int Solution::numSetBits(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    //std::string binary= std::bitset<32>(A).to_string();
    
    char binary[]="00000000000000000000000000000000";
    
    for(int pos=31;pos>=0;pos--)
    {
        if(A%2)
           binary[pos]='1';
        A= (A/2);
    }
    string str(binary);
    
    size_t n= std::count(str.begin(), str.end(),'1');
   
    return (int) n;
}
