int Solution::majorityElement(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n= floor(A.size()/2);
    map<int,int> mp;
    map<int,int>::iterator it;
    
    for(int i=0;i<A.size();i++)
    {
        it=mp.find(A[i]);
        if(it==mp.end())
        {
            mp.insert(pair<int,int>(A[i],1));
        }
        else
          it->second=mp[A[i]]+1;
        
    }
    int element=0;
    
    for(it=mp.begin();it!=mp.end();it++)
    {
       if(it->second>=n)
        {        
          element=it->first;
          break;
        }
    }
    return element;
    
}
