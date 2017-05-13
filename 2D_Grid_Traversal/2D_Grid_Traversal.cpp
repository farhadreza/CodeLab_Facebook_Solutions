// Input : X and Y co-ordinates of the points in order. 
// Each point is represented by (X[i], Y[i])
int Solution::coverPoints(vector<int> &X, vector<int> &Y) {
    
    vector<int> point;
    for(int i=0;i<X.size();i++)
      point.push_back(X[i]*X.size()+Y[i]);
      
     int move=0;
     
      for(int i=1;i<point.size();i++)
      {
        //  move+=abs(point[i]-point[i-1]);
        move+= max(abs(X[i]-X[i-1]),abs(Y[i]-Y[i-1]));
          
      }
      
      return move;
     
}
