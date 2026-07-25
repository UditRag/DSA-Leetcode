#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        // create a vecotr of size mxn and entries as 0
       
        vector<vector<int>> matrix(m,vector<int>(n,0));
        /// this creates the matrix we needed

        for(int i = 0 ; i< m;i++){
            for(int j =0 ; j< n;j++){
                cout<<matrix[i][j]<<" ";
                }
                cout<<endl;
            }
        /* now to perform column and row operations to it,  we have indices as ex: 
        [[0,1],[1,1]] meaning row - 0  and col - 1, then row - 1 and col -1, what we gotta do is increase all the elements by 1 in the given rows and columns.
        
        why don't we create a function for that, maybe someday but for now lets just not
        
        
        */

        // we can access indices as indices[i][j] , same as we access matrix

        // but indiecs have rows and columns nothing less nothing more, so we dont need to taverse the indices by two loops we can just do by 1, indies as many rows but only tow columns.


        for(int iter_indices = 0; iter_indices<indices.size();iter_indices++){
            // now we can access row and columb by 0 and 1
            // we need to select row of the matrix i.e. indices[i][0]
            int row = indices[iter_indices][0];
            int column = indices[iter_indices][1];
            // incease row values
            for(int i = 0 ; i< n; i++ ){
                matrix[row][i] += 1;
            }
            // increase column
            for(int j = 0; j < m; j++){
                matrix[j][column] += 1;
            }

        // performed the operations on the matrix
        }
        // lets see what we performed 

        for(int i = 0 ; i< m;i++){
            for(int j =0 ; j< n;j++){
                cout<<matrix[i][j]<<" ";
                }
                cout<<endl;
            }
    
        

        // now we just need to count the odd numbers
        int count = 0;
        for(int i = 0 ; i< m;i++){
            for(int j =0 ; j< n;j++){
                if(matrix[i][j] % 2 != 0){
                    count++;
                }
            }
        }

        return count;

    }
};

int main() {
    Solution sol;

    int m = 2;
    int n = 3;

    vector<vector<int>> indices = {{0, 1}, {1, 1}};

    cout << sol.oddCells(m, n, indices) << endl;

    return 0;
}