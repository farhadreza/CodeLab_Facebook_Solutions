vector<int> Solution::primesum(int A) {
    
    vector<int> final;       
    //int primes[A+1];    
  bool *primes=new bool[A+1];
   // memset(primes, true, sizeof(primes));
    
    for(int i=0;i<=A;i++)
       primes[i]=true;  
       
  //  primes[0]=false;
  //  primes[1]=false;

    for(int i=2;i<A;i++)
    {
        if(primes[i]==true)
        {      
         //for(int j=i*2;j<=A;j+=i)
          for(int j=2;(i*j)<A;j++)
           {          
            //  primes[j]=false;
               primes[i*j]=false;
            
           }
        }
       
    }   
  
	 for(int i=2;i<A;i++)
    {               
	   if(primes[i]==true)
	   {
     
		int temp_n= A - i;
	   if(primes[temp_n]==true)
        {
			  if(i<=temp_n)
              {
              
			   final.push_back(i);
               final.push_back(temp_n);
              }
              else{
              final.push_back(temp_n);           
			  final.push_back(i);
              }
            // return final;
            break;
        
         } 
     
      }
	}
	delete [] primes;
	return final;
}
