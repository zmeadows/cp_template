i/* Nothing is Impossible. */
#include <cstdint>
#include <cstdio>
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <numeric>

using namespace std;

#define pb push_back

#define ALL(x) (x).begin(), (x).end()
#define FORN(i, n) for (int i = 0; i < (int)(n); ++i)
#define FORNE(i, n) for (int i = 0; i <= (int)(n); ++i)
#define FORN1(i, n) for (int i = 1; i < (int)(n); ++i)
#define FORNE1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define FORNR(i, n) for (int i = (int)(n) - 1; i >= 0; --i)

typedef std::int64_t I;
typedef double F;
typedef string S;

template <typename T>
using V = std::vector<T>;

template <typename T>
using VV = std::vector<std::vector<T>>;

template <typename T, typename U>
using HM = std::unordered_map<T,U>;

typedef VV<I> VVI;
typedef V<I> VI;

const F PI = 3.14159265358979323846264338327950288419716939937510582097494459230;

I ctoi(char c) {
    I i = c - '0';
    if (i >= 0 && i <= 9) {
        return i;
    } else {
        cerr << "invalid input to ctoi: " << c << endl;
        exit(1);
    }
}

V<S> split(const S& s, char delimiter)
{
   V<S> tokens;
   S token;
   std::istringstream tokenStream(s);
   while (std::getline(tokenStream, token, delimiter)) {
      tokens.pb(token);
   }
   return tokens;
}

I READ_NUM(void) {
    S line;
    std::getline(std::cin, line);
    return std::stoi(line);
}

VI READ_NUMS(void) {
    S line;
    std::getline(std::cin, line);

    VI result;
    for (const S& s : split(line, ' ')) {
        result.pb(std::stoi(s));
    }

    return result;
}

S READ_STRING(void) {
    S line;
    std::getline(std::cin, line);
    return line;
}

VI StoVI(const S& s) {
    VI result; result.reserve(s.size());
    for (auto c : s) result.pb(ctoi(c));
    return result;
}

I mod(I a, I b) {
    I r = a % b;
    return r < 0 ? r + b : r;
}

I reverse_digits(I num) {
    I new_num = 0;
    while(num > 0) {
        new_num = new_num*10 + (num % 10);
        num = num/10;
    }
    return new_num;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);


    return 0;
}

