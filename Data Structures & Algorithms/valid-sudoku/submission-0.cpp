class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        vector<unordered_set<char>> rows(9); 
        vector<unordered_set<char>> columns(9); 
        vector<unordered_set<char>> squares(9); 
        for(int i =0;i<9;i++){
            for(int j=0;j<9;j++){
                char num=board[i][j];
                if(num=='.'){
                    continue;
                }
                if (rows[i].find(num) != rows[i].end()  ) {
                    return false;
                }
                else{
                    rows[i].insert(num);
                }
                if (columns[j].find(num) != columns[i].end()) {
                    return false;
                }
                else{
                    columns[j].insert(num);
                }
                if (squares[(i/3)*3+j/3].find(num) != squares[(i/3)*3+j/3].end()) {
                    return false;
                }
                else{
                    squares[(i/3)*3+j/3].insert(num);
                }
            }
        }
        return true;
        
    }
};
