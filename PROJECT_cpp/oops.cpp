#include <bits/stdc++.h>

using namespace std;

#define SIZE 4

class student_details
{
private:
    int rollno;
    string name;
    int computational_stat;
    int adavance_data_structure;
    int object_oriented_programming;
    int flat;
    int computer_org_arc;

public:
    student_details() = default;

    void display();
    void search(int);
    void subject(string);
    void overall();
    void subjectwise(string);
    void rollwise_display();
    void display_toppers();
    void overall_print();
    void subjectwise_print(string);
    void new_data_entry();
    void read_file();

    ~student_details() {}
} st, student[SIZE];

void student_details::subjectwise_print(string s)
{
    int sum[SIZE];
    if (s.length() == 18)
    {
        cout << "computational statistics:" << endl;
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = i + 1; j < SIZE; j++)
            {
                if (student[i].computational_stat < student[j].computational_stat)
                {
                    swap(student[i], student[j]);
                }
            }
        }
        st.display_toppers();
    }
    else if (s.length() == 23)
    {
        cout << "advance data structure:" << endl;

        for (int i = 0; i < SIZE; i++)
        {
            for (int j = i + 1; j < SIZE; j++)
            {
                if (student[i].adavance_data_structure < student[j].adavance_data_structure)
                {
                    swap(student[i], student[j]);
                }
            }
        }
        st.display_toppers();
    }
    else if (s.length() == 27)
    {
        cout << "object oriented programming:" << endl;

        for (int i = 0; i < SIZE; i++)
        {
            for (int j = i + 1; j < SIZE; j++)
            {
                if (student[i].object_oriented_programming < student[j].object_oriented_programming)
                {
                    swap(student[i], student[j]);
                }
            }
        }
        st.display_toppers();
    }
    else if (s.length() == 4)
    {
        cout << "flat:" << endl;

        for (int i = 0; i < SIZE; i++)
        {
            for (int j = i + 1; j < SIZE; j++)
            {
                if (student[i].flat < student[j].flat)
                {
                    swap(student[i], student[j]);
                }
            }
        }
        st.display_toppers();
    }
    else if (s.length() == 16)
    {
        cout << "computer org. and arc. : " << endl;

        for (int i = 0; i < SIZE; i++)
        {
            for (int j = i + 1; j < SIZE; j++)
            {
                if (student[i].computer_org_arc < student[j].computer_org_arc)
                {
                    swap(student[i], student[j]);
                }
            }
        }
        st.display_toppers();
    }
}

void student_details::overall_print()
{
    int sum[SIZE]{};
    for (int i = 0; i < SIZE; i++)
    {
        sum[i] = student[i].computational_stat + student[i].adavance_data_structure + student[i].object_oriented_programming + student[i].computer_org_arc + student[i].flat;
    }
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            if (sum[i] < sum[j])
            {
                swap(student[i], student[j]);
            }
        }
    }
    st.display_toppers();
}

void student_details::display_toppers()
{
    cout << "------------------------------------------------------------------------------------------" << endl;
    cout << left;
    cout << "| " << setw(8) << "rollno"
         << "| " << setw(27) << "Name"
         << "| " << setw(8) << "CS"
         << "| " << setw(8) << "ADS"
         << "| " << setw(8) << "OOPS"
         << "| " << setw(8) << "FLAT"
         << "| " << setw(8) << "COA"
         << "|" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << left;
        cout << "| " << setw(8) << student[i].rollno << "| " << setw(27) << student[i].name << "| " << setw(8) << student[i].computational_stat << "| " << setw(8) << student[i].adavance_data_structure << "| " << setw(8) << student[i].object_oriented_programming << "| " << setw(8) << student[i].flat << "| " << setw(8) << student[i].computer_org_arc << "|" << endl;
    }
    cout << "------------------------------------------------------------------------------------------" << endl;
}

void student_details::display()
{
    cout << "------------------------------------------------------------------------------------------" << endl;
    cout << left;
    cout << "| " << setw(8) << "rollno"
         << "| " << setw(27) << "Name"
         << "| " << setw(8) << "CS"
         << "| " << setw(8) << "ADS"
         << "| " << setw(8) << "OOPS"
         << "| " << setw(8) << "FLAT"
         << "| " << setw(8) << "COA"
         << "|" << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << left;
        cout << "| " << setw(8) << student[i].rollno << "| " << setw(27) << student[i].name << "| " << setw(8) << student[i].computational_stat << "| " << setw(8) << student[i].adavance_data_structure << "| " << setw(8) << student[i].object_oriented_programming << "| " << setw(8) << student[i].flat << "| " << setw(8) << student[i].computer_org_arc << "|" << endl;
    }
    cout << "------------------------------------------------------------------------------------------" << endl;
}

void student_details::subjectwise(string s)
{
    int sum[SIZE];
    if (s.length() == 18)
    {
        cout << "computational statistics:" << endl;
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = i + 1; j < SIZE; j++)
            {
                if (student[i].computational_stat < student[j].computational_stat)
                {
                    swap(student[i], student[j]);
                }
            }
        }
        st.display();
    }
    else if (s.length() == 23)
    {
        cout << "advance data structure:" << endl;

        for (int i = 0; i < SIZE; i++)
        {
            for (int j = i + 1; j < SIZE; j++)
            {
                if (student[i].adavance_data_structure < student[j].adavance_data_structure)
                {
                    swap(student[i], student[j]);
                }
            }
        }
        st.display();
    }
    else if (s.length() == 27)
    {
        cout << "object oriented programming:" << endl;

        for (int i = 0; i < SIZE; i++)
        {
            for (int j = i + 1; j < SIZE; j++)
            {
                if (student[i].object_oriented_programming < student[j].object_oriented_programming)
                {
                    swap(student[i], student[j]);
                }
            }
        }
        st.display();
    }
    else if (s.length() == 4)
    {
        cout << "flat:" << endl;

        for (int i = 0; i < SIZE; i++)
        {
            for (int j = i + 1; j < SIZE; j++)
            {
                if (student[i].flat < student[j].flat)
                {
                    swap(student[i], student[j]);
                }
            }
        }
        st.display();
    }
    else if (s.length() == 16)
    {
        cout << "computer org. and arc. : " << endl;

        for (int i = 0; i < SIZE; i++)
        {
            for (int j = i + 1; j < SIZE; j++)
            {
                if (student[i].computer_org_arc < student[j].computer_org_arc)
                {
                    swap(student[i], student[j]);
                }
            }
        }
        st.display();
    }
}

void student_details::rollwise_display()
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            if (student[i].rollno > student[j].rollno)
            {
                swap(student[i], student[j]);
            }
        }
    }
    cout << "------------------------------------------------------------------------------------------" << endl;
    cout << left;
    cout << "| " << setw(8) << "rollno"
         << "| " << setw(27) << "Name"
         << "| " << setw(8) << "CS"
         << "| " << setw(8) << "ADS"
         << "| " << setw(8) << "OOPS"
         << "| " << setw(8) << "FLAT"
         << "| " << setw(8) << "COA"
         << "|" << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << left;
        cout << "| " << setw(8) << student[i].rollno << "| " << setw(27) << student[i].name << "| " << setw(8) << student[i].computational_stat << "| " << setw(8) << student[i].adavance_data_structure << "| " << setw(8) << student[i].object_oriented_programming << "| " << setw(8) << student[i].flat << "| " << setw(8) << student[i].computer_org_arc << "|" << endl;
    }
    cout << "------------------------------------------------------------------------------------------" << endl;
}

void student_details::overall()
{
    int sum[SIZE]{};
    for (int i = 0; i < SIZE; i++)
    {
        sum[i] = student[i].computational_stat + student[i].adavance_data_structure + student[i].object_oriented_programming + student[i].computer_org_arc + student[i].flat;
    }
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            if (sum[i] < sum[j])
            {
                swap(student[i], student[j]);
            }
        }
    }
    st.display();
}

void student_details::subject(string sub)
{
    if (sub.length() == 18)
    {
        cout << "computational statistics:\n\n"
             << endl;
        cout << "| " << setw(8) << "rollno"
             << "| " << setw(27) << "name"
             << "| " << setw(8) << "CS"
             << " | " << endl;

        for (int i = 0; i < SIZE; i++)
        {
            cout << left;

            cout << "| " << setw(8) << student[i].rollno << "| " << setw(27) << student[i].name << "| " << setw(8) << student[i].computational_stat << " | " << endl;
        }
    }
    else if (sub.length() == 23)
    {
        cout << "advance data structure:\n\n"
             << endl;
        cout << "| " << setw(8) << "rollno"
             << "| " << setw(27) << "name"
             << "| " << setw(8) << "ADS"
             << " | " << endl;

        for (int i = 0; i < SIZE; i++)
        {
            cout << left;
            cout << "| " << setw(8) << student[i].rollno << "| " << setw(27) << student[i].name << "| " << setw(8) << student[i].adavance_data_structure << " | " << endl;
        }
    }
    else if (sub.length() == 27)
    {
        cout << "object oriented programming\n\n"
             << endl;
        cout << "| " << setw(8) << "rollno"
             << "| " << setw(27) << "name"
             << "| " << setw(8) << "OOPS"
             << " | " << endl;

        for (int i = 0; i < SIZE; i++)
        {
            cout << left;
            cout << "| " << setw(8) << student[i].rollno << "| " << setw(27) << student[i].name << "| " << setw(8) << student[i].object_oriented_programming << " |" << endl;
        }
    }
    else if (sub.length() == 4)
    {
        cout << "flat:\n\n"
             << endl;
        cout << "| " << setw(8) << "rollno"
             << "| " << setw(27) << "name"
             << "| " << setw(8) << "FLAT"
             << " | " << endl;

        for (int i = 0; i < SIZE; i++)
        {
            cout << left;
            cout << "| " << setw(8) << student[i].rollno << "| " << setw(27) << student[i].name << "| " << setw(8) << student[i].flat << " |" << endl;
        }
    }
    else if (sub.length() == 16)
    {
        cout << "computer org. and arc. : " << endl;
        cout << "| " << setw(8) << "rollno"
             << "| " << setw(27) << "name"
             << "| " << setw(8) << "COA"
             << " | " << endl;

        for (int i = 0; i < SIZE; i++)
        {
            cout << left;
            cout << "| " << setw(8) << student[i].rollno << "| " << setw(27) << student[i].name << "| " << setw(8) << student[i].computer_org_arc << " |" << endl;
        }
    }
}

void student_details::search(int rn)
{
    int flag = 1;

    for (int i = 0; i < SIZE; i++)
    {
        if (student[i].rollno == rn)
        {
            cout << "------------------------------------------------------------------------------------------" << endl;
            cout << left;
            cout << "| " << setw(8) << "rollno"
                 << "| " << setw(27) << "Name"
                 << "| " << setw(8) << "CS"
                 << "| " << setw(8) << "ADS"
                 << "| " << setw(8) << "OOPS"
                 << "| " << setw(8) << "FLAT"
                 << "| " << setw(8) << "COA"
                 << "|" << endl;

            cout << left;
            cout << "| " << setw(8) << student[i].rollno << "| " << setw(27) << student[i].name << "| " << setw(8) << student[i].computational_stat << "| " << setw(8) << student[i].adavance_data_structure << "| " << setw(8) << student[i].object_oriented_programming << "| " << setw(8) << student[i].flat << "| " << setw(8) << student[i].computer_org_arc << "|" << endl;

            cout << "------------------------------------------------------------------------------------------" << endl;
            flag = 0;
        }
    }
    if (flag == 1)
    {
        cout << "the roll number not found ." << endl;
    }
}

void student_details::new_data_entry()
{

    string s;
    cout << "enter the name of your file : ";
    cin >> s;

    ofstream out;

    out.open(s);

    int cs[SIZE];
    int coa[SIZE];
    int oops[SIZE];
    int Flat[SIZE];
    int ads[SIZE];
    string name[SIZE];
    int roll[SIZE];
    out << "------------------------------------------------------------------------------------------" << endl;
    out << left;
    out << "| " << setw(8) << "rollno"
        << "| " << setw(27) << "Name"
        << "| " << setw(8) << "CS"
        << "| " << setw(8) << "ADS"
        << "| " << setw(8) << "OOPS"
        << "| " << setw(8) << "FLAT"
        << "| " << setw(8) << "COA"
        << "|" << endl;

    out << "------------------------------------------------------------------------------------------" << endl;
    for (int i = 0; i < SIZE; i++)
    {

        cout << "enter your roll number: ";
        cin >> student[i].rollno;
        roll[i] = student[i].rollno;
        cout << "enter your name: ";

        getchar();
        getline(cin, student[i].name);
        name[i] = student[i].name;

        cout << "enter the marks for the subject cs: ";
        cin >> student[i].computational_stat;
        cs[i] = student[i].computational_stat;
        cout << "enter the marks for the subject ads: ";
        cin >> student[i].adavance_data_structure;
        ads[i] = student[i].adavance_data_structure;
        cout << "enter the marks for the subject oop: ";
        cin >> student[i].object_oriented_programming;
        oops[i] = student[i].object_oriented_programming;
        cout << "enter the marks for the subject flat: ";
        cin >> student[i].flat;
        Flat[i] = student[i].flat;
        cout << "enter the marks for the subject coa: ";
        cin >> student[i].computer_org_arc;
        coa[i] = student[i].computer_org_arc;
        out << "| " << setw(8) << roll[i] << "| " << setw(27) << name[i] << "| " << setw(8) << cs[i] << "| " << setw(8) << ads[i] << "| " << setw(8) << oops[i] << "| " << setw(8) << Flat[i] << "| " << setw(8) << coa[i] << "|" << endl;
    }
    out << "------------------------------------------------------------------------------------------" << endl;
    out.close();
}

void student_details::read_file()
{
    ofstream out;
    ifstream in;
    string s;
    string name;
    int roll;
    int cs;
    int ads;
    int oops;
    int flat;
    int coa;

    int flag = 0;
    while (flag != 1)
    {
        cout << "enter the name of the file  : \n";
        cin >> s;

        in.open(s);
        if (in.is_open())
        {
            cout << "THE FILE FOUND:\n\n\n " << endl;

            cout << "------------------------------------------------------------------------------------------" << endl;
            cout << left;
            cout << "| " << setw(8) << "rollno"
                 << "| " << setw(27) << "Name"
                 << "| " << setw(8) << "CS"
                 << "| " << setw(8) << "ADS"
                 << "| " << setw(8) << "OOPS"
                 << "| " << setw(8) << "FLAT"
                 << "| " << setw(8) << "COA"
                 << "|" << endl;
            int i = 0;
            while (in >> roll >> name >> cs >> ads >> oops >> flat >> coa)

            {
                student[i].rollno = roll;
                student[i].name = name;
                student[i].computational_stat = cs;
                student[i].adavance_data_structure = ads;
                student[i].object_oriented_programming = oops;
                student[i].flat = flat;
                student[i].computer_org_arc = coa;

                cout << left;
                cout << "| " << setw(8) << roll << "| " << setw(27) << name << "| " << setw(8) << cs << "| " << setw(8) << ads << "| " << setw(8) << oops << "| " << setw(8) << flat << "| " << setw(8) << coa << "|" << endl;
                i++;
            }

            cout << "------------------------------------------------------------------------------------------" << endl;

            flag = 1;
        }
        else
        {
            cout << "SOMETHING WENT WRONG, THE FILE NAME YOU ENTERED DOES NOT EXIST : \n\n\n"
                 << endl;
            flag = 0;
        }
    }
}

int main()
{

    char input;
    cout << "new data entry?  : y/n : ";
    cin >> input;
    if (input == 'y' || input == 'Y')
    {
        st.new_data_entry();
        st.display();
    }
    else
    {
        st.read_file();
    }

    int option;
    while (option != 5)
    {
        option = 0;
        int rn = 0;
        int subs = 0;
        int opt = 0;
        int sub = 0;

        cout << "\n\n\n---------------------------------------------------------------------------------\n\n"
             << endl;
        cout << "\nselect the following options : " << endl;

        cout << "\n1) view particular student: " << endl;

        cout << "\n2) view particular subject: " << endl;

        cout << "\n3) sort students as per overall/subjectwise: " << endl;

        cout << "\n4)print overall/subjectwise topper: " << endl;

        cout << "\n5)exit from the program ? " << endl;

        cout << "\nyour option: ";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "\n\n\n---------------------------------------------------------------------------------\n\n"
                 << endl;
            cout << "enter the roll number of the student: ";
            cin >> rn;
            st.search(rn);
            break;
        // ============================================================================================
        case 2:

            while (subs != 6)
            {
                cout << "\n\n\n\nwhich subject's marks do you want to see: " << endl;
                cout << "------------------------------------------------------------------------------------------" << endl;
                cout << left;
                cout << "1) CS\n"
                     << "2)ADS\n"
                     << "3)OOPS\n"
                     << "4)FLAT\n"
                     << "5)COA\n"
                     << "6)exit\n"
                     << endl;
                cout << "\n\n---------------------------------------------------------------------------------\n\n"
                     << endl;
                cin >> subs;

                switch (subs)
                {
                case 1:
                    st.subject("computational_stat");
                    break;
                case 2:
                    st.subject("adavance_data_structure");
                    break;
                case 3:
                    st.subject("object_oriented_programming");
                    break;
                case 4:
                    st.subject("flat");
                    break;
                case 5:
                    st.subject("computer_org_arc");
                    break;
                case 6:
                    break;
                default:
                    cout << "\n\nwrong input" << endl;
                }
            }
            break;
        // ============================================================================================
        case 3:

            while (opt != 4)
            {

                cout << "sort the students with: " << endl;
                cout << "\n\n---------------------------------------------------------------------------------\n\n"
                     << endl;

                cout << "1) overall sort : " << endl;
                cout << "2) subject wise topper " << endl;
                cout << "3) roll number wise topper " << endl;
                cout << "4) exit" << endl;
                cout << "\n\n---------------------------------------------------------------------------------\n\n"
                     << endl;

                cin >> opt;
                switch (opt)
                {
                case 1:
                    st.overall();
                    break;
                case 2:
                    int sub;

                    while (sub != 6)
                    {
                        cout << "\n\n\n\nwhich subject you want to sort with :  " << endl;
                        cout << "------------------------------------------------------------------------------------------" << endl;
                        cout << left;
                        cout << "1) CS\n"
                             << "2)ADS\n"
                             << "3)OOPS\n"
                             << "4)FLAT\n"
                             << "5)COA\n"
                             << "6)exit\n"
                             << endl;
                        cout << "\n\n---------------------------------------------------------------------------------\n\n"
                             << endl;

                        cin >> sub;

                        switch (sub)
                        {
                        case 1:
                            st.subjectwise("computational_stat");
                            break;
                        case 2:
                            st.subjectwise("adavance_data_structure");
                            break;
                        case 3:
                            st.subjectwise("object_oriented_programming");
                            break;
                        case 4:
                            st.subjectwise("flat");
                            break;
                        case 5:
                            st.subjectwise("computer_org_arc");
                            break;
                        case 6:
                            break;
                        default:
                            cout << "\n\nwrong input" << endl;
                        }
                    }
                    break;

                case 3:
                    st.rollwise_display();
                    break;
                case 4:
                    break;
                default:
                    cout << " \n\nwrong input, please try again: " << endl;
                }
            }
            break;
        case 4:
            int top;
            while (top != 3)
            {
                cout << "\n\n---------------------------------------------------------------------------------\n\n"
                     << endl;

                cout << "1)overall toppers : " << endl;
                cout << "2)subjectwise toppers : " << endl;
                cout << "3)exit" << endl;
                cout << "\n\n---------------------------------------------------------------------------------\n\n"
                     << endl;

                cin >> top;
                switch (top)
                {
                case 1:
                    st.overall_print();
                    break;
                case 2:

                    while (sub != 6)
                    {
                        cout << "\n\n\n\nwhich subject's toppers you want : " << endl;
                        cout << "------------------------------------------------------------------------------------------" << endl;
                        cout << left;
                        cout << "1) CS\n"
                             << "2)ADS\n"
                             << "3)OOPS\n"
                             << "4)FLAT\n"
                             << "5)COA\n"
                             << "6)exit\n"
                             << endl;
                        cout << "\n\n---------------------------------------------------------------------------------\n\n"
                             << endl;

                        cin >> sub;

                        switch (sub)
                        {
                        case 1:
                            st.subjectwise_print("computational_stat");
                            break;
                        case 2:
                            st.subjectwise_print("adavance_data_structure");
                            break;
                        case 3:
                            st.subjectwise_print("object_oriented_programming");
                            break;
                        case 4:
                            st.subjectwise_print("flat");
                            break;
                        case 5:
                            st.subjectwise_print("computer_org_arc");
                            break;
                        case 6:
                            break;
                        default:
                            cout << "\n\nwrong input" << endl;
                        }
                    }
                    break;
                case 3:
                    break;
                default:
                    cout << "\n\nwrong input" << endl;
                }
            }
        case 5:
            break;
        default:
            cout << "\n\nwrong input please try again!" << endl;
        }
    }
}
