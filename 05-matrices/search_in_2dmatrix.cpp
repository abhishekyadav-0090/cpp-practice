#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix1(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> ans;
        for(int i =0;i<m;i++){
            for(int j = 0;j<n;j++){
                ans.push_back(matrix[i][j]);
            }
        }
        int low = 0;
        int high = ans.size()-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(target == ans[mid]){
                return true;
            }
            else if( target < ans[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return false;
}

bool searchMatrix2(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int l = m*n;

        int low = 0;
        int high = l-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            int row = mid / n;
            int col = mid % n;
            if(target == matrix[row][col]){
                return true;
            }
            else if( target < matrix[row][col]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return false;
}
int main(){


vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
int target = 4;
cout<<searchMatrix2(matrix,4);
cout<<searchMatrix1(matrix,4);


}