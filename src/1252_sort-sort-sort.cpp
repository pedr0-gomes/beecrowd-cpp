// Problem: Sort! Sort!! e Sort!!!
// Link:    https://judge.beecrowd.com/pt/problems/view/1252
// Category: Estruturas e Bibliotecas

// g++ -std=c++17 -Wall -Wextra 1252_sort-sort-sort.cpp -o output/sort-sort-sort.exe
// .\output\sort-sort-sort.exe
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    while (cin >> N >> M) 
    {
        cout << N << " " <<  M << "\n";
        if ((N <= 0 &&  N > 10000) || (M <= 0 &&  M > 10000))     return 1;
        if (N == 0 && M == 0)   break;
        
        vector<pair<int,int>> mod;
        for (int i = 0; i < N; i++) {
            int num;
            cin >> num;
            int k = num % M;
            mod.push_back({num,k});
        }

        sort(mod.begin(),mod.end(), [](const pair<int,int>a, const pair<int,int>b)
        {
            if (a.second != b.second)   return a.second < b.second;

            bool aOdd = (a.first % 2 != 0);
            bool bOdd = (b.first % 2 != 0);

            if (aOdd != bOdd)   return aOdd;        
            if (aOdd)   return a.first > b.first;    // ambos impares: decrescente
            return a.first < b.first;                // ambos pares: crescente
        });

        for (auto p : mod) 
        {
            cout << p.first << "\n";
        }

    }
    return 0;
}
