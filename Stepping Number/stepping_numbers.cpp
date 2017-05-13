vector<int> Solution::stepnum(int A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
 
     vector<int> solution;
     for(int i=A; i<=B;i++)
     {       
         if(i>10)
         {
         int temp=i;
         int step=0;
         while(temp>10)
         {
             int mod1= temp%10;
             temp = temp/10;
             int mod2=temp%10;
             step=abs(mod2-mod1);
             
             if(step>1 || step==0)
                break;
             
         }
         
         if(step==1)
            solution.push_back(i);
         }
         else
            solution.push_back(i);
     }
    return solution;  
}
