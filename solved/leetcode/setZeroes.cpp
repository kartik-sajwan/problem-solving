//https://leetcode.com/problems/set-matrix-zeroes/

#include <bits/stdc++.h>

using namespace std;

void setZeroes(vector<vector<int>>& matrix)
{

	int R = matrix.size();
	int C = matrix[0].size();

	int col1 = 1;

	for(int i = 0; i < R; i++)
	{
		if(matrix[i][0] == 0)
		{
			col1 = 0;
		}
	}
	for(int i = 0; i < R; i++)
	{	 //skip the first column j=1
		for(int j = 1; j < C; j++)
		{
			if(matrix[i][j] == 0)
			{
				matrix[0][j] = 0;
				matrix[i][0] = 0;
			}
		}
	}
	for(int i = 1; i < R; i++)
	{
		for(int j = 1; j < C; j++)
		{
			if(matrix[0][j] == 0 || matrix[i][0] == 0)
			{
				matrix[i][j] = 0;
			}
		}
	}
	//if first row is zero
	if(matrix[0][0] == 0)
	{
		for(int j = 0; j < C; j++)
		{
			matrix[0][j] = 0;
		}
	}
	//if first col is zero
	if(col1 == 0)
	{
		for(int i = 0; i < R; i++)
		{
			matrix[i][0] = 0;
		}
	}
}

int main()
{

	vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 0, 7, 8}, {0, 10, 11, 12}, {13, 14, 15, 0}};
	setZeroes(matrix);

	int R = matrix.size();
	int C = matrix[0].size();
	for(int i = 0; i < R; i++)
	{
		for(int j = 0; j < C; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}

/*
Algorithm

    We iterate over the matrix and we mark the first cell of a row i and first cell of a column j, if the condition in the pseudo code above is satisfied. i.e. if cell[i][j] == 0.

    The first cell of row and column for the first row and first column is the same i.e. cell[0][0]. Hence, we use an additional variable to tell us if the first column had been marked or not and the cell[0][0] would be used to tell the same for the first row.

    Now, we iterate over the original matrix starting from second row and second column i.e. matrix[1][1] onwards. For every cell we check if the row r or column c had been marked earlier by checking the respective first row cell or first column cell. If any of them was marked, we set the value in the cell to 0. Note the first row and first column serve as the row_set and column_set that we used in the first approach.

    We then check if cell[0][0] == 0, if this is the case, we mark the first row as zero.

    And finally, we check if the first column was marked, we make all entries in it as zeros.

*/