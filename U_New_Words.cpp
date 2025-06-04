#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int egypt = INT_MAX;
    int e = 0, g = 0, y = 0, p = 0, t = 0;

    for (int i = 0; i < s.size(); i++)
    {
        // if (e + g + y + p + t == 5)
        // {
        //     // cout << egypt << endl;
        //     egypt++;
        //     e = 0;
        //     g = 0;
        //     y = 0;
        //     p = 0;
        //     t = 0;
        // }
        if (s[i] == 'E' || s[i] == 'e')
        {
            e++;
            // cout << "E" << e << endl;
            // s.replace(i, 1, "o");
        }
        else if (s[i] == 'G' || s[i] == 'g')
        {
            g++;
            // cout << "G" << g << endl;
            // s.replace(i, 1, "o");
        }
        else if (s[i] == 'Y' || s[i] == 'y')
        {
            y++;
            // cout << "Y" << y << endl;
            // s.replace(i, 1, "o");
        }
        else if (s[i] == 'P' || s[i] == 'p')
        {
            p++;
            // cout << "P" << p << endl;
            // s.replace(i, 1, "o");
        }
        else if (s[i] == 'T' || s[i] == 't')
        {
            t++;
            // cout << "T" << t << endl;
            // s.replace(i, 1, "o");
        }
    }
    // cout << e << g<< y<< p<< t << endl;

    int egypt = min({e, g, y, p, t});
    cout << egypt << endl;


    return 0;
}