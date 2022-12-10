#include <iostream>
using namespace std;

template <class T1 = string, class T2 = long long int>
struct Student{
    T1 id;
    T1 name;
    T1 department;
    T1 email;
    T2 phoneNumber;
};
int main()
{
    Student<> s1;
    s1.id = "023-21-0786";
    s1.name = "Muhammad Tayyab";
    s1.department = "Artificial Intelligence";
    s1.email = "muhammadtayyab.bhutto";
    s1.email.append("@code-smashers.com");
    s1.phoneNumber = 3093416858;

    cout << "Student Id: " << s1.id << endl;
    cout << "Student Name: " << s1.name << endl;
    cout << "Student Department: " << s1.department << endl;
    cout << "Student Email: " << s1.email << endl;
    cout << "Student Phone Number: " << s1.phoneNumber << endl;

    return 0;
}