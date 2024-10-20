#include <iostream>

using namespace std;

int main()
{

    // static memory allocation
    // if you are array with size then cannot be increased leads to memory wastage.

    // dynamic memory allocation :
    // the process of allocating the memory at the time of execution is called as the dynamic memory allocation

    // all the dma takes place in heap.

    // alloacted memory can only be accessed using the pointers

    // new : dyanmic memory allocation

    int *ptr = new int(45);
    cout << *ptr << endl;
    *ptr = 50;
    cout << *ptr + 100 << endl;
    delete ptr;
    ptr = NULL;

    // array:

    int *arr = new int[3];
    arr[0] = 1;
    arr[1] = 11;
    arr[2] = 102;

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;
    arr = nullptr;

    return 0;
}