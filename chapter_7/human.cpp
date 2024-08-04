#include <iostream>
#include <string>
using namespace std;

class Human{
    protected:
        string name;
    public:
        virtual void speak();
        void speakWithDecoration();
        Human(string name);
};

void Human::speak(){
    cout << "Name: " << this->name << endl;
}
void Human::speakWithDecoration(){
    cout << "★★★★★★★★★" << endl;
    speak();
    cout << "★★★★★★★★★" << endl;
}
Human:: Human(string name){
    this->name = name;
}

class Student : public Human{
    protected:
        string number;
    public:
        void speak();
        Student(string name, string number);
};

void Student::speak(){
    cout << "Name: " << this->name << endl;
    cout << "Number: " << this->number << endl;
}

Student::Student(string name, string number):
Human(name) {
    this->number = number;
}

int main(){
    Student ryan("Ryan Palazzolo", "ABC1245");
    ryan.speak();
    ryan.speakWithDecoration();
    return 0;
}
