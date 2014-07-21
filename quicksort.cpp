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
void quickSort(vector <int>  ar, int ar_size) {
    if (ar_size == 1)
        {
            cout << ar[0] << " ";
        }
    else if (ar_size == 2)
        {
            cout << ar[0] << " " << ar[1] << " ";
        }
    else
        {
            vector<int> smaller; // recursively call quicksort on this
            vector<int> larger; // and this
            int partition = ar.front();
            for (int i =1; i < ar.size(); i++)
                {
                    if (ar[i] < partition)
                        {
                            smaller.push_back(ar[i]);
                        }
                    else
                        {
                            larger.push_back(ar[i]);
                        }
                }
            // partition(smaller);
            // partition(larger);
            smaller.push_back(partition);
            quickSort(smaller, smaller.size());
            quickSort(larger, larger.size());
        }
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

quickSort(_ar, _ar_size);
   
   return 0;
}
