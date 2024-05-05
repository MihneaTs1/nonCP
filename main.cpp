/// MihneaTheMogger was here
#pragma GCC optimize("O4,unroll-loops,fast-math")
#define debug(x) #x << " = " << x << '\n'
#include <bits/stdc++.h>

/// Online Evaluation Settings
#define EVAL_USE_FI 0 /// Whether to use file input or not
#define EVAL_USE_FO 0 /// Whether to use file output or not
#define EVAL_FI_NAME "" /// File input name (useless if EVAL_USE_FI == 0)
#define EVAL_FO_NAME "" /// File output name (useless if EVAL_USE_FO == 0)
#define EVAL_USE_FASTIO 0 /// Whether to use fast input/output or not
/// Local Settings
#define LOCAL_USE_FI 0 /// Whether to use file input or not
#define LOCAL_USE_FO 0 /// Whether to use file output or not
#define LOCAL_FI_NAME "" /// File input name (useless if LOCAL_USE_FI == 0)
#define LOCAL_FO_NAME "" /// File output name (useless if LOCAL_USE_FO == 0)
#define LOCAL_USE_FASTIO 0 /// Whether to use fast input/output or not
/// General Settings
#define GENERAL_MULTIPLE_TESTCASES 0 /// Whether the program runs the function solve() multiple times
#define GENERAL_USE_INT128_IO 0 /// Wheter the program activates __int128 input/output compatibility (output for __int128 can be slower and memory intensive)

using namespace std; /// cuz why not

/// Input / Output operators for __int128
#if GENERAL_USE_INT128_IO == 1
istream& operator>> (istream& in, __int128 &x)
{
    char ch;
    int mul = 1;
    while (!isdigit (ch = in.get()) && ch != '-');
    if (ch == '-')
    {
        mul = -1;
        ch = in.get();
    }
    while (isdigit (ch))
    {
        x = x * 10 + ch - '0';
        ch = in.get();
    }
    return in;
}
ostream& operator<< (ostream& out, __int128 x)
{
    string s;
    do
    {
        s += (x % 10 + '0');
        x /= 10;
    }
    while (x);
    for (int i = s.size() - 1; i >= 0; i --)
        out << s[i];
    return out;
}
#endif

void preinit(); /// One-time run/preprocess function (useful for problems with multiple testcases that require generating large amounts of data e.g the sieve of Eratosthenes)
void solve(); /// Main solve function

ifstream fin; /// file input stream
ofstream fout; /// file output stream

int32_t main()
{
#ifndef LOCAL
#if EVAL_USE_FI == 1
    fin.open (EVAL_FI_NAME);
#define cin fin
#endif /// File Input
#if EVAL_USE_FO == 1
    fout.open (EVAL_FO_NAME);
#define cout fout
#endif /// File Output
#if EVAL_USE_FASTIO == 1
    ios_base::sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);
#endif /// Fast Input/Output
#else
#if LOCAL_USE_FI == 1
    fin.open (LOCAL_FI_NAME);
#define cin fin
#endif /// File Input
#if LOCAL_USE_FO == 1
    fout.open (LOCAL_FO_NAME);
#define cout fout
#endif /// File Output
#if LOCAL_USE_FASTIO == 1
    ios_base::sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);
#endif /// Fast Input/Output
#endif /// Checks whether the program is ran locally or not
    preinit(); /// The initial function that is ran for preprocessing
#if GENERAL_MULTIPLE_TESTCASES == 1
    int t; cin >> t;
    while (t --) solve();
#else
    solve();
#endif /// Checks whether the program needs to run solve() once or a given amount of times
    return 0;
}

///------------------------------------------------------->

//#define int int64_t /// :D

void preinit()
{
}

#define lim 200001

void solve()
{

}

/**

*/

///------------------------------------------------------->


// Note: the program configuration settings are located and can be modified at line 5-19
/// #MLC
