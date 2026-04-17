// Problem: Parafusos e Porcas
// Link:    https://judge.beecrowd.com/pt/problems/view/1520
// Category:    Estruturas e Bibliotecas

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    while (cin >> N)
    {
        vi v;
        while (N--) 
        {
            int X,Y;
            cin >> X >> Y;
            for (int i = X;i <= Y;i++)
            {
                v.push_back(i);
            }
        }

        sort(v.begin(),v.end());

        int Num; cin >> Num;
        
        auto lb = lower_bound(v.begin(),v.end(),Num);
        auto ub = upper_bound(v.begin(),v.end(),Num);
        
        int idx_lb = lb - v.begin();
        int idx_ub = ub - v.begin();

        if (idx_ub == idx_lb)
        {
            cout << Num << " not found" << "\n";
        }
        else                
        {
            cout << Num << " found from " << idx_lb <<" to " << idx_ub - 1 << "\n";
        }
    }
    
    return 0;
}
