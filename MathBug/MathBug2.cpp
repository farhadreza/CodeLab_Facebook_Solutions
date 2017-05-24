vector<vector<int> > Solution::squareSum(int A) {
	vector<vector<int> > ans;
	for (int a = 0; (a * a) < A; a++) {
		for (int b = 0; (b * b) < A; b++) {
			if ( (a * a + b * b) == A) {
				vector<int> newEntry; 
				newEntry.push_back(a);
				newEntry.push_back(b);
				vector<int> reverseEntry;
				reverseEntry.push_back(b);
				reverseEntry.push_back(a);
				
				if(std::find(ans.begin(), ans.end(), newEntry)==ans.end() && std::find(ans.begin(), ans.end(), reverseEntry)==ans.end())
				    ans.push_back(newEntry);
			}
		}
	}
	return ans;
}
