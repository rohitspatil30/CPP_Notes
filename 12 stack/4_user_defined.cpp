// #include <iostream>

// using namespace std;

// class stack_using_array
// {
//     int top = -1;

//     void push(int value)
//     {
//         if (top == cap - 1)
//         {
//             cout << "stack overflow " << endl;
//             return;
//         }
//         else
//         {
//             arr[++top] = value;
//         }
//     };
//     int cap;
//     cout << "enter the size of the array : " << endl;
//     cin >> cap;
//     int arr[cap];
//     int option;
//     while (option != 6)
//     {
//         cout << "choose the operation you want to perform on stack : " << endl;
//         cout << "1) push " << endl;
//         cout << "2) pop " << endl;
//         cout << "3) display " << endl;
//         cout << "4) size " << endl;
//         cout << "5) top " << endl;
//         cout << "6) exit " << endl;
//         cin >> option;

//         switch (option)
//         {
//         case 1:
//             cout << "enter the value you want to push into the stack " << endl;
//             int value;
//             cin >> value;
//             push(value);
//             break;
//         case 2:
//             cout << "the number which is popped is " << pop() << endl;
//             break;
//         case 3:
//             display();

//             break;
//         case 4:
//             cout << "the size of the stack is : " << size() << endl;
//             break;
//         case 5:
//             cout << "the top value is : " << top() << endl;
//             break;
//         case 6:
//             option = 6;
//         default:
//             cout << "wrong option , please enter your choice again " << endl;
//         }
//     }
// };

// void
// stack_using_linked_list()
// {
// }

// int main()
// {

//     cout << "enter the option you want  : " << endl;
//     cout << "1) stack implementaion using array ," << endl;
//     cout << "2) stack  implementataion using linked list " << endl;
//     int option;
//     switch (option)
//     {
//     case 1:
//         stack_using_array();
//         break;

//     case 2:
//         stack_using_linked_list();
//         break;

//     default:

//         cout << "wrong input, please try again " << endl;
//     }

//     return 0;
// }

