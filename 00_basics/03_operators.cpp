#include <iostream>
using namespace std;

int main() {
    // Arithmetic Operators
    int a = 10, b = 3;
    int add = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    int mod = a % b;

    // Assignment Operators
    int x = 5;
    x += 2;   // x = 7
    x -= 1;   // x = 6
    x *= 3;   // x = 18
    x /= 2;   // x = 9
    x %= 4;   // x = 1

    // Comparison Operators
    bool eq  = (a == b);
    bool neq = (a != b);
    bool lt  = (a < b);
    bool gt  = (a > b);
    bool lte = (a <= b);
    bool gte = (a >= b);

    // Logical Operators
    bool t = true, f = false;
    bool land = t && f;  // false
    bool lor  = t || f;  // true
    bool lnot = !t;      // false

    // Bitwise Operators
    unsigned int p = 6;   // 0110
    unsigned int q = 3;   // 0011
    unsigned int band = p & q;  // 0010
    unsigned int bor  = p | q;  // 0111
    unsigned int bxor = p ^ q;  // 0101
    unsigned int bnot = ~p;     // complement
    unsigned int shl  = p << 1; // 1100
    unsigned int shr  = p >> 1; // 0011

    return 0;
}
