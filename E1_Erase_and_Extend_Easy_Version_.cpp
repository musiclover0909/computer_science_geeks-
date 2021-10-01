//Turing machine
#include <bits/stdc++.h>
using namespace std;
int n;
char q;
map<char, map<char, vector<char>>> m;
vector<char> final;
bool check(string s)
{
    char p = q;
    int i = 0;
    while (i >= 0 && i < s.size())
    {
        char input = s[i];
        if (m[p][input].size() == 0)
            return false;
        else
        {
            s[i] = m[p][input][1];
            if (m[p][input][2] == 'R')
                i++;
            else
                i--;
            p = m[p][input][0];
        }
    }
    for (auto f : final)
        if (p == f)
            return true;
    return false;
}
int main()
{
    cout << "Enter no. of states:";
    cin >> n;
    cout << "Enter initial state:";
    cin >> q;
    int nt;
    cout << "No. of transitions:";
    cin >> nt;
    cout << "-------Enter transitions \n";
    cout << "state(i) read state(j) write direction(R/L)\n";
    while (nt--)
    {
        char i, r, j, w, d;
        cin >> i >> r >> j >> w >> d;
        m[i][r].push_back(j);
        m[i][r].push_back(w);
        m[i][r].push_back(d);
    }
    int nf;
    cout << "Enter no. of final states:";
    cin >> nf;
    cout << "Enter final states:\n";
    while (nf--)
    {
        char fs;
        cin >> fs;
        final.push_back(fs);
    }
    cout << "Enter the string to be checked(0 to exit):";
    string s;
    cin >> s;
    while (s != "0")
    {
        if (check(s))
            cout << "ACCEPTED\n";
        else
            cout << "REJECTED\n";
        cout << "Enter the string to be checked/0 to exit:";
        cin >> s;
    }
    return 0;
}
