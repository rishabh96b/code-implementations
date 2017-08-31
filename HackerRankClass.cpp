/*
@Author: Rishabh(rishabhbohra10@gmail.com)
Problem Link:https://www.hackerrank.com/challenges/c-tutorial-class
Language: C++
*/


#include <iostream>
#include <sstream>
using namespace std;

// creating class Student

class Student{
    int age;
    string first_name,last_name;
    int standard;
    public:
    inline void set_age(int age){this->age=age;}
    inline void set_last_name(string name){this->last_name=name;}
    inline void set_standard(int stan){this->standard=stan;}
    inline void set_first_name(string name){this->first_name=name;}
    inline int get_age(){return this->age;}
    inline int get_standard(){return this->standard;}
    inline string get_first_name(){return this->first_name;}
    inline string get_last_name(){return this->last_name;}
    void to_string(){
        cout<< this->age<<","<< this->first_name << "," << this->last_name << "," << this->standard << endl;
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
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    st.to_string();
   
    return 0;
}
//end of main()
