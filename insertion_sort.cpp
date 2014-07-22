// This is a quick algorithm to count the number of swaps that INSERTION_SORT makes in order to sort an array. If we don't 
// use the cout statement to print the number of swaps, we will still get a sorted array, as I count the number of sorts,
// as and when they are performed. Therefore, this also gives reference to the performance of insertion. The worst case 
// scenario for this algorithm is O(n^2).

#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
#include<iostream>

void function_insertion_sort_counts(int array[], int size)
    {
        int sum = 0;
        for (int i = 0; i < size; i++)
            {
                for (int j = i; j < (size - 1); j++)
                    {
                        if (array[j] > array[j + 1])
                            {
                                sum++;
                                int temp = array[j];
                                array[j] = array[j + 1];
                                array[j + 1] = temp;
                            }
                    }
            }
        std::cout << sum;
}

int main()
{
    int n;
    std::cin >> n;
    int array_unsorted[n];
    for (int i = 0; i < n; i++)
        {
            std::cin >> array_unsorted[i];
        }
    function_insertion_sort_counts(array_unsorted, n);
}
