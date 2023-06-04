#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// The brute force approach would be to whenever you find 0 set its corresponding row and column 
	// to zero.
	// We can store the row and column occurence in the set.
	
	int row = matrix.size();
	int col = matrix[0].size();
	vector<int> zeroRow;
	vector<int> zeroCol;
	
	// Finding the row and column location for zeroes.
	for(int i = 0 ; i < row ; i++){
		for(int j = 0 ; j < col ; j++){
			if(matrix[i][j] == 0){
				zeroRow.push_back(i);
				zeroCol.push_back(j);
			}
		}
	}

	// Setting the values zero.
	for(int i = 0 ; i < zeroRow.size(); i++){
		for(int j = 0 ; j < col ; j++){
			matrix[zeroRow[i]][j] = 0;
		}
	}
	for(int j = 0 ; j < zeroCol.size() ; j++){
		for(int i = 0 ; i < row ; i++){
			matrix[i][zeroCol[j]] = 0;
		}
	}
}
