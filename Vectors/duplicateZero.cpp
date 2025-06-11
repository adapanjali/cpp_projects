#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        void duplicateZeros(vector<int>& arr) { // You cannot return from a void function 
            
            for(int i=0; i < arr.size(); i++) { // i is not an index position, it is the value that arr contains at each index 
                if(arr[i] == 0) {
                    arr.insert(arr.begin()+i, 0); // .insert() automatically pushes the other elements backwards 
                    arr.pop_back(); // removes the last element 
                    i++; // Incrementing here goes over the index where the new 0 is added
                }
            }

            cout<<"The new array is ";
            for (int& n : arr) {
                cout<<n<<" ";
            }

        }
};

int main() {
    
    vector<int> n = {1, 0, 2, 4, 0, 3, 0};
    Solution sol;
    sol.duplicateZeros(n);
    
    return 0;
}