/*
stack is a linear data structure, follows LIFO principle.
last in first out from one open end called as top pointing the recently pushed element.

example : cd box ,bangle box .

operations on stack : push pop peek isempty isfull

push (int d ) : pushes the element into the stack until stack overflow .

pop() : deletes the top element unless stack underflow .

peek() : return the top element if not empty.

ways to implement stack :

*/

// array : dynamic array: vectors

// #include <iostream>
// #include <vector>
// #define f                              \
//     for (int i = 0; i < s.size(); i++) \
//     {                                  \
//         cout << s[i] << " ";           \
//     }                                  \
//     cout << "\n"                       \
//          << endl;

// using namespace std;

// int main()
// {
//     vector<int> s;

//     // push
//     s.push_back(23);
//     s.push_back(34);
//     f
//         s.pop_back();
//     f

//         return 0;
// }
//---------------------------------------------------
// important problem  :

// create a special type of stack which has all the operation including getminimum fucntion

/*
2 stacks one the normal one and other the minimum one.
push the smallest one in min stack even if the larger element is pushed

|10|    |-1
|5  |   |-1
|-1 |   |-1
|3 |    |3
|5 |    |5
*/

#include <iostream>
#include <vector>

using namespace std;

class spStack
{
public:
    vector<int> d;
    vector<int> m;
    spStack()
    {
        vector<int> d;
        vector<int> m;
    }

    void push(int x)
    {
        d.push_back(x);
        m.push_back(min(x, (m.back())));
    }
    void pop()
    {
    }
};

int main()
{

    return 0;
}

// smaller nearest element in spacing in stack

// brute for after every insertion always use for loop to check for first smallest element.

// for(int i = arr[top] - 1 ;i>=0;i--){ if(less found ) return };

/*
now optimal method :
insert the elements if it is greater than the previous one and if the smaller elmenet is found then pop and push the element coz already we got the smaller element than alll the right elements ;

-inf = if stack is empty


ifst_empty{
    ans.append(-inf)
    st.push(a[i]);

}
if a[i]>st.top(){
    ans.append(st.top)
    st.push(a[i])

}
if(a[i]  < st.top()){
    while(st.top()<a[i])
    st.pop();
    ans.append(st.top())
    st_push(a[i]);

}
nearest smaller toleft :

----------------------------------------------------

largest area in histogram



*/
