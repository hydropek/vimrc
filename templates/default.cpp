#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#define debug(x) cerr << #x << " = " << (x) << " "
#define debugln(x) cerr << #x << " = " << (x) << endl
#define debugf(...) fprintf(stderr, __VA_ARGS__)
#define debugv(fmt, ...) \
    fprintf(stderr, "<%s:%d> " fmt "\n", __func__, __LINE__, ## __VA_ARGS__)
using namespace std;
template<typename T1, typename T2>
bool cmax(T1 &a, const T2 &b) { return b > a ? (a = b, 1) : 0; }
template<typename T1, typename T2>
bool cmin(T1 &a, const T2 &b) { return b < a ? (a = b, 1) : 0; }
template<typename T> T read() {
    T a = 0, f = 0; int c = getchar();
    while (!isdigit(c)) { f ^= c == '-',  c = getchar(); }
    while (isdigit(c)) { a = a * 10 + (c ^ 48),  c = getchar(); }
    a *= f ? -1 : 1; return a;
}
struct Fastin {
    template<typename T>
    Fastin& operator >> (T &x) { x = read<T>(); return *this; }
    Fastin& operator >> (char &c) { scanf("%c", &c); return *this; }
    Fastin& operator >> (char c[]) { scanf("%s", c); return *this; }
} fastin;

int main() {
    return 0;
}
