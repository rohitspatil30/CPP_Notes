/*
variables:
equation : x+ 2y =0 ;
here x and y are called as the variables as they hold the values

similarly the variable are the boxes which hold the value inside them and are stores in the computers memory both according to the data type assigned to it.
-----------------------------------------------------------------------------------
-----------------------------------------------------------------------------------
-----------------------------------------------------------------------------------
data type:
data type decides the  type of the data which will be assigned to the variables

like the sticker which tells the box which country it will be deliverd to the the gift inside the box is the value of the variable the address where it is going is the memory location in computer and the space it will taking is the space in the memory .

types: user defined :classes, struct, union, enums

primitive : int, float. bool , char, etc

--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------

user defined data type :  have their own meaning for the variable their own way of storing data and their own data type storing and accessing features:

example : classes, union , struct, enums .
--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
data structure:
a  data structure is a particular way of storing data, in a way that it can be used efficiently later on.
data structure is a apecial type of the storing data.

types of the data structure :

linear data structure an non linear data structure.

linear data structure : stores the value in the contiguous manner in a single level which can be accessed in single iteration.

example: arrays, linked list, stack queues.

non linear data structure: the data is stored in the non contiguous manner and the multilevel or hirarchial manner which cannot be accessed in single iteration is called as non linear dat structure.

example: graph, tree etc.

--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------

abstract data type:
in simple words user defined data types along with their operations are called as the adt;

it consist of two parts:

1) data part     2) operation part

both of the part are used simultaneously.
here the operation have the usesr defined meaning unlike the + , - operation which have the meaning stored in them in compiler itself.

--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------

algorithm :
step by step finite and unambiguous  instructions  to solve a given task.
properties:
a) unnambiguos : no wrong info
b) definiteness : every step should have meaning
c) finite : must terminate at some point
d) input : must take 0+ an input
e) output : must generate the desired output.

it is compared on the two basis:

1)space taken by the algo

2) time taken by the algo to execute.

--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------

why algo analysis ?

algorithm analysis helps us to determine which algorithm is most efficient in terms of space and time taken.

to compare the algorithms for larger and arbitart inputs
to compare the algorithm on less space complexity
to compare which is less ambiguos
to see which is more practically implementable
to see which algorithm needs more resources(inputs size, output fromat, variables used, developer efforts, fastest working, less memory cache used, number of steps) , etc.

--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------

ideal solution:
the input is considered as the function of the input and the algorithm is independent to any machine , programming style or language.

rate of growth :
the rate at which the running time increases as the inputs increases is called rate of growth.
    ## general assumptions made: higher degree is only considered
        ex: n^3 + 1000000n^2  : ~ (n^3) the rate of growth will be still n^3 no matter the constant value.

common used rate of growth are:

1 : constant ex: 13,234342 , 999999999999 etc
n: linear : ex: 34n , 555n +4500 , etc
n^2 : quadractic : ex: n^2 +100n + 999
n^3: cubic : ex: n^3 +12n^2 +445n + 1000
log(n): log(4n),
 NOTE: LOGN IS LESS THAN N, HENCE ALL THE LOGS AND ITS MULTIPLE WILL BE LESS THAN THE N AND ITS MULTIPLES
        example: logn < n , nlogn < n^2 , n^2logn < n^3....
--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------

level of orders:

2^2^n > n^n > n! > 4^n > 2^n >n^2 >nlogn > log(n!) > n^3 > n^2logn > n^2 >nlogn > n >2^logn >log^2n >logn > sqrt(logn) > loglogn > 1.

--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------

types of the analysis :

worst case : longest possible time for an algorithm to be executed once the particular input is given.

best case : least possible time taken by an algorithm to be executed once the  particular input is given

average case: average of all possible rate of growth inclusive beat and worst time is called the average possible time:

example : linear search | 2 | 3 | | 4 | 6 | 10 |
key 2 :  best case as the key is found in first pass itself
key 10 (last or the element which is not present in this array ) : worst element as we have to traverse complete array.

average is the average of all the time.

--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------

*/
#include <iostream>

int main()
{
    std::cout << "hello world " << std::endl;
}