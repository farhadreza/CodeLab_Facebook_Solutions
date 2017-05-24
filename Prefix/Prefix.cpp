vector<string> Solution::prefix(vector<string> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    vector<string> B;
    int step=0;
    int max=0;
    bool flag=false;
    
    for(int i=0;i<A.size();i++)
    {
          max=0;
          int k;
            
          for(int j=0;j<A.size();j++)
          {
            if(A[j]==A[i])
               continue;
            step=0;
            string str1=A[i];
            string str2=A[j];
            
            for(k=0;k<str1.length() && k<str2.length();k++)
            {
                if(str1[k]!=str2[k])
                {
                  flag=true;
                  break;
                  
                }
                   
            }
          if(flag && k>max)
            max=k;
        
        }
        std::string str(A[i], 0, max+1);
        B.push_back(str);
             
    }
    return B;
}
