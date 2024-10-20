#include <iostream>
#include <string>

using namespace std;

int main()
{

    int num1, num2, num3;
    cout << "enter the number: ";
    cin >> num1 >> num2 >> num3;
    std::string ans;
    int asnwer = ((num1 > num2 && num1 > num3) ? num1 : (num2 > num1 && num2 > num3) ? num2
                                                                                     : num3);
    cout << "the answer is : " << asnwer << endl;
}