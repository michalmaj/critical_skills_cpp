/*
 * Score of Parentheses
 * Given a balanced parentheses string S, compute the score of the string based on the following rule:
 *  - () has 1
 *  - AB has score A + b, where A and B are balanced parentheses strings.
 *  - (A) has score 2 * A, where A is a balanced parentheses string
 * Use stack.
 * Inputs:
 *  () => 1
 *  (()) => 2
 *  ()() => 2
 *  (()()) => 4
 *  (()(())) => 6
 *  ()((())()) => 7
 */

/*
 * As an example let's consider: (()(()))
 * We know any valid sub-expression can be replaced with its value. Let's find the smallest ones.
 * ( () ( () )) => ( 1+ ( () )) => ( 1 ( 1 )) => (1 + 2) => (3) => 6
 * We see that subexpression () with the value 1 and (()) with vale 2 are part of a bigger expression (()(()))
 *
 * We can write inefficient code to keep find internal small expressions, but can we do smarter?
 *
 * Thinking in processing left to right: we either:
 *  - have to indicate a new subexpression that will have done in future
 *  - or to indicate there is a subexpression that is done now
 *
 * Stack can help us to do that
 *  - We find (, we add 0: it represents the initial sum of the internal subexpressions
 *  - We find ), we finish a subexpression value and accumulate to its parent
 * It might now be easy to get idea, but its solution can be a similar thinking style in other stack problems
 */
#include <iostream>
#include <stack>

int scoreOfParentheses(const std::string& str){
    // Each integer represent s total sum added to this parent Parentheses
    std::stack<int> st;

    // temp value to help us
    st.push(0);

    for(const auto& c : str){
        if(c == '(')
            st.push(0); // new parent: current sum = 0
        else{
            // An expression will be closed
            // Find its value: either 1 for empty () or 2 * its sub-expressions
            // Add the expression sum to its parent current sum
            int last = st.top();
            st.pop();

            if(last == 0)
                last = 1; // case ()
            else
                last *= 2; // case (A). Get current sum and multiply

            // Assume we have expression E is (CHD)
            // where C, H, D are valid-subexpression with values 5, 10, 4
            // then E is (5+10+4) = (19) = 38
            // Every time we finish an expression, we add its value to its paren

            // get the paren and update its sum with a finished sub-expression
            int parent_par = st.top() + last; // new total sum
        }

    }
    return st.top();
}

int main(){
    std::cout<<scoreOfParentheses(  "(()(()))(()(()))"  );

    return 0;
}