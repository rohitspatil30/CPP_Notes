/*
it is used as a prerequisite to many sorting algorithm such as in binary sort which requires a sorted array .

1) binary array : partition algorithm or quick sort (lomuto)

2) sorting algorithms for a range of values , or repeated values. or with 0,1,2,3 values or when you eant to sort an array with respect to a number we use : quick sort

3) when size of array is 10000 but range of problem is around 100 only , so there are many repeated values : counting sort

4) with more range  :  radix sort

5) data is uniformly distributed : bucket sort

6) when memory writes are costly, then use  selection sort, cycle sort(better).

7)swap only adjacent element, bubble sort but better is cocktail sort

8) when array is small , selection and insertion sort(works best for small number of elements)

9) when available internal memory is small :
shell sort. does not use extra memory
and take time (O(n(logn)^2)).


general purpose solving algorithm : atleast nlogn
merge sort(stable works great for linked list) , heap sort are both nlogn even in the worst case but
quick sort being nlogn in avg case is n^2 in worst case. but it works more efficiently than merge and heap sort.

both quick and merge are divide and conquer alogrithm used for parrallel sorting


----------------

hybrid algorithm

timsort : merge sort and insertion sort in python merge for large arrays and then insertion for small sized arrays .

introsort : qucik , heap and insertion sort, and quick generally , heap when recursion calls are more and insertion when the array size is small .










*/
#include <iostream>

using namespace std;

int main()
{

    cout << "read the comments only this is just to run the code !!" << endl;
    return 0;
}