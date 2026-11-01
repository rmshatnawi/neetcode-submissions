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
             char ch0 = board[j][i]; char ch1 = board[j][i+1]; char ch2 = board[j][i+2];
             char ch3 = board[j+1][i]; char ch4 = board[j+1][i+1]; char ch5 = board[j+1][i+2];
             char ch6 = board[j+2][i]; char ch7 = board[j+2][i+1]; char ch8 = board[j+2][i+2];
             if (ch0 != '.') {
                 num_count[ch0 - '1']++;
                 if (num_count[ch0 - '1']> 1) return false;
             }
             if (ch1 != '.') {
                 num_count[ch1 - '1']++;
                 if (num_count[ch1 - '1']> 1) return false;
             }
             if (ch2 != '.') {
                 num_count[ch2 - '1']++;
                 if (num_count[ch2 - '1']> 1) return false;
             }
             if (ch3 != '.') {
                 num_count[ch3 - '1']++;
                 if (num_count[ch3 - '1']> 1) return false;
             }
             if (ch4 != '.') {
                 num_count[ch4 - '1']++;
                 if (num_count[ch4 - '1']> 1) return false;
             }
             if (ch5 != '.') {
                 num_count[ch5 - '1']++;
                 if (num_count[ch5 - '1']> 1) return false;
             }
             if (ch6 != '.') {
                 num_count[ch6 - '1']++;
                 if (num_count[ch6 - '1']> 1) return false;
             }
             if (ch7 != '.') {
                 num_count[ch7 - '1']++;
                 if (num_count[ch7 - '1']> 1) return false;
             }
             if (ch8 != '.') {
                 num_count[ch8 - '1']++;
                 if (num_count[ch8 - '1']> 1) return false;
             }
         }
     }
     return ans;
    }
};
