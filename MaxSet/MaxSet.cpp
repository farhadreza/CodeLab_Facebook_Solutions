vector<int> Solution::maxset(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<int> result;
    double set_sum=0;
    double max_sum=0;
    int start_index=0;
    int end_index=0;
    
    vector<int>::iterator it;
    
    for(int i=0;i<A.size();i=(end_index))
    {
        start_index=i;
        set_sum=0;
        
        for(int j=start_index;j<A.size();j++)
        {
          
          if(A[j]<0)
            {
             break;
            }
          else if(A[j]>=0)
             {
             set_sum+=A[j];
             end_index=j;
             }
        }
      
      if(set_sum>=0 && A[end_index]>=0)
        {
        if(set_sum>max_sum)
          {
              
              result.clear();
              result.assign(A.begin()+start_index,A.begin()+end_index+1);
              max_sum=set_sum;
              
          }
          
        if(set_sum==max_sum) 
        {
            int set_length=end_index-start_index+1;
            if(set_length>result.size())
             {
              result.clear();
              result.assign(A.begin()+start_index,A.begin()+end_index+1); 
             }
             
           else
             {
               it=find(A.begin(),A.end(),result[0]);
               auto pos = std::distance(A.begin(), it);     
               if(start_index<pos)
                 {
                    result.clear();
                    result.assign(A.begin()+start_index,A.begin()+end_index+1);  
                 }
             }
        }
           
      }
    
          end_index++;
         
    }
    return result;
}
