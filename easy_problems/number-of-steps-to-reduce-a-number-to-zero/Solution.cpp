class Solution {
public:
    int numberOfSteps (int num) {
        int k = 0;
        
        while(num != 0){
            if (num%2 == 1) num -= 1;
            else num /= 2;
            
            k += 1;
        }
        
        return k;
    }
};