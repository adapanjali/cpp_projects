#include <iostream>
using namespace std;

class Solution {
    public:
        int numberOfSteps(int num) {
            
            int ctr=0;
    
            while(num!=0){
                if(num%2==0){num=num/2;
                             ctr++;}
                else{num--;
                     ctr++;}            
            }
            
            return ctr;
        }
    };

    int main() {
        Solution sol;
        int num;
    
        cout << "Enter a number: ";
        cin >> num;
    
        int steps = sol.numberOfSteps(num);
        cout << "Number of steps to reduce " << num << " to zero: " << steps << endl;
    
        return 0;
    }