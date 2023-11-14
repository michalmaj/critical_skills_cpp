/*
 * Valid Parentheses
 * Given a string containing just the characters '(', ')', '{', '}', '[', ']', determine if the input string is valid.
 * An input string is valid if:
 *  1. Open brackets must be closed by the same type of brackets.
 *  2. Open brackets must be closed in the correct order.
 * Note that an empty string is also valid.
 */
#include <iostream>
#include <map>
#include <stack>

// Function to check if a string of parentheses is valid
bool isValid(const std::string& str) {
    // Map to store the matching close parenthesis for each type of open parenthesis
    std::map<char, char> mp{
            {')', '('},
            {']', '['},
            {'}', '{'}
    };

    // Stack to keep track of open parentheses
    std::stack<char> parentheses;

    // Loop through each character in the input string
    for (char ch : str) {
        // If the character is a closing parenthesis
        if (mp.count(ch)) {
            // A closing parenthesis is encountered. It must match the last open parenthesis.

            // If the stack is empty, there is no matching open parenthesis
            if (parentheses.empty())
                return false;

            // Get the corresponding open parenthesis for the current closing parenthesis
            char open = mp[ch];

            // Get the last open parenthesis from the stack
            char cur_open = parentheses.top();

            // If they don't match, the string is not valid
            if (open != cur_open)
                return false;

            // Pop the matched open parenthesis from the stack
            parentheses.pop();
        } else {
            // If the character is an open parenthesis, push it onto the stack
            parentheses.push(ch);
        }
    }

    // The string is valid if the stack is empty at the end
    return parentheses.empty();
}

int main() {
    // Example usage
    std::string s1{"([])([{}])"};

    // Print the result of the isValid function for the given string
    std::cout << isValid(s1);

    return 0;
}
