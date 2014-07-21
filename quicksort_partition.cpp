// A helper function to quicksort, that may be called, if one does not want to write a special case in quicksort.

// This function basically uses the first element of the input array/vector as the pivot and places all elements smaller than
// it on it's left and those greater than it, on it's right. It makes use of two queues. Repeated call of this results in an
// array being sorted.

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int> partition(vector<int> ar) {
    queue<int> larger;
    queue<int> smaller;
    vector<int> * return_value = new vector<int>;
    int partition = ar.front();
    for (int i = 1; i < ar.size(); i++)
        {
            if (ar[i] < partition)
                {
                    smaller.push(ar[i]);
                }
            else if (ar[i] > partition)
                {
                    larger.push(ar[i]);
                }
            else
                {
                    continue;
                }
        }
    int size = smaller.size();
    for (int i = 0; i < ar.size(); i++)
        {
            if (i < size)
                {
                    (*return_value).push_back(smaller.front());
                    smaller.pop();
                }
            else if (i == size)
                {
                    (*return_value).push_back(partition);
                }
            else 
                {
                    (*return_value).push_back(larger.front());
                    larger.pop();
                }
        }
    return (*return_value);
}

int main(void) {
   vector <int>  _ar;
   int _ar_size;
cin >> _ar_size;
for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
   int _ar_tmp;
   cin >> _ar_tmp;
   _ar.push_back(_ar_tmp); 
}

vector<int> return_val = partition(_ar);
for (int i = 0; i < _ar_size; i++)
    {
        cout << return_val[i] << " ";
    }
   return 0;
}

