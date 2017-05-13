int Solution::bulbs(vector<int> &A) {
    
    int count=0;
    int state=0;
    for(int j=0;j<A.size();j++)
       {
        if(A[j]==state)
          {
            A[j]=1;
            state=state^1;
            count++;
          }
        }
    return count;
}
