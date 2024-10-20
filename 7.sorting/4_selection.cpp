/*
this is the easiest sorting techinique here we start from the first element and compare that particular value with every other element int that array ahead of it . so if we find any element smaller than that value then we swap those values else we just continue.after one iteration the next number in the array is considered and the same process is followed
*/
#include <iostream>

using namespace std;

void intsort(int arr[], int size)
{
    int min;
    for (int i = 0; i < size - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[min] > arr[j])
            {
                min = arr[j];
            }
        }
        swap(arr[min], arr[i]);
    }
    cout << "\nthe sorted array is: \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    int max;
    cout << "\n\nnow printing the array in desending order: \n";
    for (int i = 0; i < size - 1; i++)
    {
        max = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[max] < arr[j])
            {
                max = j;
            }
        }
        swap(arr[max], arr[i]);
    }
    cout << "\nthe sorted array is: \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void swapsort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {

        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    cout << "\nthe sorted array is: \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n\n now sorting the element in descending order: ";
    for (int i = 0; i < size - 1; i++)
    {

        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    cout << "\nthe sorted array is: \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size, option = 1;
    cout << "\nenter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "\nenter the elements in the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    while (option > 0)
    {
        cout << "\n\nenter the type of selection sort : \n1)using integer \n2)using swap \n3)exit: ";
        cin >> option;
        switch (option)
        {
        case 1:
            intsort(arr, size);
            break;
        case 2:
            swapsort(arr, size);
            break;
        case 3:
            exit(0);
        default:
            cout << "\ninvalid input: ";
        }
    }
}