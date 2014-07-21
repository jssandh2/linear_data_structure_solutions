// This is the quicksort algorithm. It makes use of taking the first elmement as the pivot, and creating 2 new vectors
// where each vector stores the elements smaller than the pivot and greater than the pivot respectively.
// Append the pivot to the smaller vector, and recursively call quicksort on eah vector till the size is 1 or 2, in which 
// case we print the sorted arrays. 
// We can also concatenate the arrays into a sorted array, however, I chose not to do it. This builds upon the idea of my 
// partition function.

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
    if (ar_size == 0)
        {
            return;
        }
    else if (ar_size == 1)
        {
            cout << ar[0] << " ";
        }
    else if (ar_size == 2)
        {
            if (ar[0] < ar[1])
                {
                    cout << ar[0] << " " << ar[1] << " ";
                }
            else
                {
                    cout << ar[1] << " " << ar[0] << " ";                      
                }
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
            smaller.push_back(partition);
            if (larger.size() == 0)
                {
                     quickSort(smaller, smaller.size()); // partition(smaller);
                }
            else
                {
                     quickSort(smaller, smaller.size()); // partition(smaller);
                     quickSort(larger, larger.size()); // partition(larger);                  
                }
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

