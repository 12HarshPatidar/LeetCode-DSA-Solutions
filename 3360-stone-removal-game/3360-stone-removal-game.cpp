class Solution {
public:
    bool canAliceWin(int n) {

        int count = 0;
        int move = 10;

        while(n >= move) {

            n = n - move;
            move--;
            count++;

        }
        
        return count%2 == 1;
    }
};