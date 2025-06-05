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
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++)
    {
        int n;
        cin>>n;

        string s;
        cin >> s;
        
        char freq[51] = {'0'};
        // freq[n] = {'0'};
        
        
        for(int j = 0; j<n; j++)
        {
            bool is_exist = false;
            if(j == 0)
            {
                freq[j] = s[j];
            }
            else{
                for(int k = 0; k < j; k++)
                {
                    if(freq[k] == s[j])
                    {
                        is_exist = true;
                        break;
                    }
                }
                if(is_exist == false)
                {
                    freq[j] = s[j];
                }
            }
        }

        int balloons = 0;

        for(int j = 0; j<n; j++)
        {
            if(s[j] != '\0')
            {
                balloons++;
            }
        }
        // cout << balloons << endl;

        for(int j = 0; j<n; j++)
        {
            if(freq[j] != '\0')
            {
                balloons++;
            }
            // cout << freq[j];
        }
        cout << balloons << endl;
        // cout << endl;
        


    }

    return 0;
}