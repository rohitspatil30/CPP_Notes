#include <iostream>

using namespace std;

class person
{

    string name;
    int age;

public:
    person() = default;

    person(string s, int a)
    {
        name = s;
        age = a;
        cout << "the person's name is: " << name << " and your age is : " << age << endl;
    }

    int return_birth_year(int age)
    {
        return (2023 - age);
    }

    void gen_z_or_not(int a)
    {
        if (2000 <= a)
        {
            cout << "you belong to gen z" << endl;
        }
        else
            cout << "you are a millenial" << endl;
    }
};

int main()
{
    int age;
    string name;
    cout << "enter your name :   ";
    cin >> name;
    cout << "enter your age : ";
    cin >> age;

    person rohit(name, age);
    rohit.gen_z_or_not(rohit.return_birth_year(age));
    // passing class member as srgument :

    return 0;
}
