int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
     int count=0;
        int temp;
        bool flag;
       
           
           for(int k=0;k<A.size();k++)
           {
             temp=A[k];
             flag=false;
             for(int j=0;j<count;j++)
             {
              
             if(temp==A[j]) {
			 
                flag=true;
                break;
			   }
             }
             if(flag==false)
             {
                 A[count]=temp;
                 count++;
             }
            
           }
		   return count;
        
}
