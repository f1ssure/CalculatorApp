#include "Operations.h"

double Operations::Calculate(double x, char oper, double y)
{
    switch (oper) {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        default:
            return 0.0;
    }
}
