#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    int age;
    int standard;
    string first_name;
    string last_name;
    
    public:
        void set_age(int age){
            this->age = age; 
        }
        void set_first_name(string first_name){
            this->first_name = first_name;
        }
        void set_last_name(string last_name){
            this->last_name = last_name;
        }
        void set_standard(int standard){
            this->standard = standard;
        }
        void get_age(){
            cout << age <<endl;
        }
        void get_first_name(){
            cout << first_name;
        }
        void get_last_name(){
            cout<< last_name;
        }
        void get_standard(){
            cout << standard << endl; 
        }
        void to_string(){
            cout << age << "," << first_name << ","
            << last_name << "," << standard;
        }
        
    
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    st.get_age();
    st.get_last_name();
    cout << ", "; 
    st.get_first_name();
    cout<<endl;
    st.get_standard();
    cout << endl;
    st.to_string();
    
    return 0;
}