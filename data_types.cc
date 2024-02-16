#include <cstddef>

int main()
{
    // -ve support and +ve support
    int x;
    long y;
    double z;
    short a; // h
    char b;
    float c;
    bool d;
    long long e;
    long long int f;
    long double g; // Lf

    // ONLY +ve support

    unsigned int x2;
    unsigned long y2;
    unsigned short a2; // uh
    unsigned char b2;  // uc
    unsigned long long e2;
    unsigned long long int f2;

    size_t h; // size_t is the size of pointer on a system
    // size_t on a x86_64 (64 bit) unsigned long
    // sizeof (size_t) is 8 bytes on 64 bit arch
    // %zu

    // C++17 onwards
    char16_t c1; // short
    char32_t c2; // int
    char8_t c3;  // char // onwards C++20
    wchar_t c4;  // wide character

    void *p; // universal pointer
}
