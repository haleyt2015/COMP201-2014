#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
	string word;
	vector<int> stack;
	
	char *end;
    int number,left,right;
	
	// Read in words until we're done
    while (cin >> word) {
        if (word == ".") {
			for (int i = 0; i < stack.size(); i++) {
				cout << stack[i] << endl;
			}
			// print out stack
            break;
        }
        else if (word == "+") {
			right = stack.back();
			stack.pop_back(); //left, right);
			left = stack.back();
			stack.pop_back(); //left, right);
			number = left + right ;
			stack.push_back(number);
			// pop 2 items off stack
			// compute left + right, and push to stack
			
        }
        else if (word == "-") {
			right = stack.back();
			stack.pop_back();
			left = stack.back();
			stack.pop_back();
			number = left - right;
			stack.push_back (number);
			// pop 2 items off of the stack
			// compute left - right, and push to stack
			
        }
        else if (word == "*") {
			right = stack.back();
			stack.pop_back();
			left = stack.back();
			stack.pop_back();
			number = left * right;
			stack.push_back (number);
			//pop 2 items off of the stack 
			//compute left * right , and push back to stack 
			
        }
		else if(word=="/"){
			right = stack.back();
			stack.pop_back();
			left = stack.back();
			stack.pop_back();
			number= left / right;
			stack.push_back(number);
			//pop 2 items off of the stack 
			//compute left/ right and push to stack 
			
		}
		else {
			number = strtol(word.c_str(), &end, 10);
			stack.push_back(number);
		}
    }
return 0;
}