#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
    public:
        vector<string> fizzBuzz(int n) {
            vector<string> answer(n); // Cannot be string answer[n] as you cannot declare variable length arrays. 

            for(int i=1; i<=n; i++){
               if(i%3==0 && i%5==0)     {answer[i-1] = "FizzBuzz";}
               else if(i%3==0 && i%5!=0){answer[i-1] = "Fizz";}
               else if(i%3!=0 && i%5==0){answer[i-1] = "Buzz";}
               else                     {answer[i-1] = to_string(i);}
            }

            return answer;
        }  
};


/* 

SOLUTION 2: This can also be done by dynamic allocation using vector 
--------------------------------------------------------------------
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer; // Starts empty, grows dynamically

        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) answer.push_back("FizzBuzz");
            else if (i % 3 == 0)          answer.push_back("Fizz");
            else if (i % 5 == 0)          answer.push_back("Buzz");
            else                          answer.push_back(to_string(i));
        }

        return answer;
    }
};

SOLUTION 3: String concatenation 
-------------------------------------------------------------------
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer(n); // Preallocate space

        for (int i = 1; i <= n; i++) {
            string result = "";

            if (i % 3 == 0) result += "Fizz";
            if (i % 5 == 0) result += "Buzz";

            // If result is still empty, store the number as a string
            if (result.empty()) result = to_string(i);

            answer[i - 1] = result; // Store in vector
        }

        return answer;
    }
};

*/ 

int main() {
    Solution sol;
    int n = 15; // Example input
    vector<string> result = sol.fizzBuzz(n);

    // Print output
    for (const string& s : result) {
        cout << s << endl;
    }

    return 0;
}