#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    map<char, int> freqMap;
    for (char ch : s)
    {
        freqMap[ch]++;
    }
    bool oddLen = n % 2 == 1;
    if (oddLen)
    {
        int cnt = 0;
        for (auto it : freqMap)
        {
            if (it.second % 2 == 1)
            {
                cnt++;
            }
        }
        if (cnt != 1)
        {
            cout << "NO SOLUTION" << endl;
        }
        else
        {
            string evenStr = "";
            string oddStr = "";
            for (auto it : freqMap)
            {
                if (it.second % 2 == 0)
                {
                    evenStr.append(it.second / 2, it.first);
                }
                else
                {
                    oddStr.append(it.second, it.first);
                }
            }
            string revStr = evenStr;
            reverse(revStr.begin(), revStr.end());
            string req = evenStr + oddStr + revStr;
            cout << req << endl;
        }
    }
    else
    {
        int cnt = 0;
        for (auto it : freqMap)
        {
            if (it.second % 2 == 1)
            {
                cnt++;
            }
        }
        if (cnt > 0)
        {
            cout << "NO SOLUTION" << endl;
        }
        else
        {
            string evenStr = "";
            for (auto it : freqMap)
            {
                evenStr.append(it.second / 2, it.first);
            }
            string revStr = evenStr;
            reverse(revStr.begin(), revStr.end());
            string req = evenStr + revStr;
            cout << req << endl;
        }
    }
    return 0;
}