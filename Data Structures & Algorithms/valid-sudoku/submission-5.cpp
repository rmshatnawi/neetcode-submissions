class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
     bool ans = true;
        
        // check horizontals
        for(auto x: board){
            array<int, 9> num_count{}; 
            for(char ch: x){
                if (ch == '.') {continue;}
                else {
                    num_count[ch - '1']++;
                    if (num_count[ch - '1']> 1) return false;
                }
            }
        }
        // chech verticals
        for(int i = 0; i< board.size(); i++){
            array<int, 9> num_count{}; 
            for(int j = 0; j< board.size(); j++){
                char ch = board[j][i];
                if (ch == '.') {continue;}
                else {
                    num_count[ch - '1']++;
                    if (num_count[ch - '1']> 1) return false;
                }
            }
        }
            // check 3*3 boxs
        for (int i = 0; i<9;i+=3){
            for (int j = 0; j<9;j+=3){
                array<int, 9> num_count{}; 
                for (int x = 0; x<3; x++){
                    for (int z = 0; z<3; z++){
                        char ch = board[j+z][i+x];
                        if (ch == '.') {continue;}
                        else {
                            num_count[ch - '1']++;
                            if (num_count[ch - '1']> 1) return false;
                        }
                    }
                }
            }
        }
     return ans;
    }
};
