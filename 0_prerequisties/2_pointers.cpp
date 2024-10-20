// #include <iostream>

// using namespace std;

// int main()
// {
//     int a = 9;
//     void *ptr = &a;
//     cout << *(int *)ptr << endl; // typecasting the void pointer to integer pointer.
//     // direct dereferencing is not possible :

//     return 0;
// }
/*

use of void pointer :

malloc and callc functions returns a void pointer, due to this reason, they can allocate a member for any type of the data.

*/

// -------------------------------------------

// null pointer is a pointer that does not point to any memory location

// #include <iostream>

// using namespace std;

// int main()
// {

//     int *ptr = NULL; // good practice .

//     // sometimes malloc return the NULL when the allocation is not done.

//     ptr = (int *)malloc(2 * sizeof(int));

//     if (ptr == NULL) // good practice for checking null.
//     {
//         cout << "there is no memory : " << endl;
//     }
//     else
//     {
//         cout << "memory allocated : " << endl;
//     }
//     return 0;
// }

// --------------------------------------------------------

// danglilng pointer :

// the pointer which points to some none existing memory location .

#include <iostream>

using namespace std;

int main()
{

    int *ptr = new int(45);
    cout << *ptr << endl;
    delete ptr; // dangling pointer

    // here the memory is realeased but the pointer still points that memory even if it is not existing this pointer which do not have any fixed loaction to point are called as the dangling pointers.

    // dangling pointer are created as soon as the function goes out of scope.

    ptr = NULL; // good practice to keep it null pointed.
    // null pointer is the solution to dangling pointer.
    return 0;
}

// wild pointer : are the pointer are similar to dangling pointer . illegal pointer
// how to avoid it initialize it by the address of the data type .
