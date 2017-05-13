vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    
    int N=A.size();
    vector<vector<int> > B(2*N-1);
    
    
    if(A.size()==1)
    {
       B[0].push_back(A[0][0]);
       return B;
    }
    
    int initial_index=0;
    
    int row=0, col=0;
    
   for(int initial_index=0; initial_index<(2*N-1); initial_index++)
   {
       
     for( int i=row, j=col; j>=0 && i<A.size(); ++i, --j)
     {
        
      //  for(int col=0;col<A.size();col++)
       // {
            B[initial_index].push_back(A[i][j]);
           // B[row+1].push_back(A[row+1][col]);
       // }
       
        
     }
     col++;
     if(col== A.size())
     {
     
        row++;
        col--;
     }
    
   } 
    
   // B[2*N-2].push_back(A[N-1][N-1]);
    
    return B;
}
