#include <iostream>
using namespace std;

int main() {
    // Integer Types
    int i = 42;
    short s = 32000;
    long l = 1000000L;
    long long ll = 9223372036854775807LL;

    unsigned int ui = 42;
    unsigned short us = 65000;
    unsigned long ul = 100000UL;
    unsigned long long ull = 18446744073709551615ULL;

    // Floating Point Types
    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 3.141592653589793238L;

    // Character Types
    char c = 'A';
    wchar_t wc = L'Ω';
    char16_t c16 = u'あ';
    char32_t c32 = U'𐍈';

    // Boolean
    bool b = true;

    cout << i << ' ' << sizeof(i) << endl;
}