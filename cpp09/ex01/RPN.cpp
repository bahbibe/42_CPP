#include "RPN.hpp"

bool is_op(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%');
}

void rpn(std::string input)
{
    std::stack<int> stack;
    std::stringstream ss(input);
    char token;

    while (ss.get(token))
    {
        ss >> std::ws;
        if (std::isdigit(token))
            stack.push(token - '0');
        else if (is_op(token))
        {
            if (stack.size() < 2)
                throw std::runtime_error("Error");
            int a = stack.top();
            stack.pop();
            int b = stack.top();
            stack.pop();
            switch (token)
            {
            case '+':
                stack.push(b + a);
                break;
            case '-':
                stack.push(b - a);
                break;
            case '*':
                stack.push(b * a);
                break;
            case '/':
                stack.push(b / a);
                break;
            case '%':
                stack.push(b % a);
                break;
            }
        }
        else
            throw std::runtime_error("Error");
    }
    if (stack.size() != 1)
        throw std::runtime_error("Error");
    std::cout << stack.top() << std::endl;
}