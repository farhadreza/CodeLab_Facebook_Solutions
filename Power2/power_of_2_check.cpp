bool Solution::isPower(int A) {
    
    if(A==1) return true;
    for(int j=2;j<= (int) sqrt(A);j++)
    {
    for(int i=2;i<=32;i++)
    {
          
     if((int)(pow(j,i))<=INT_MAX)
     {
      if((A ^ (int)(pow(j,i)))==0)
          return true;
     }
        
        
    }
    }
    return false;
}
