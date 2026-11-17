#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "========================================" << endl;
    cout << "WELCOME TO YOUR FIRST PROGRAM! *^-^* " << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << "1. What is your name? ";
    getline(cin, name);
    if (name.empty()) {
        cout<<"Bruh you didn't enter a name! >:/ "<<endl;
    }
    string course;
    cout<<"2.What course are you doing?(BBIT/BCS) ";
    getline(cin, course);
    string hobby;
    cout<<"3.What is your hobby? ";
    getline(cin, hobby);
    string reason;
    cout<<"4.Why did you choose this course? ";
    getline(cin, reason);
    string expectation;
    cout<< "5.What do you expect to learn in programming?";
    getline(cin,expectation);
    string definition;
    cout<<"6.In your own words,what is programming?";
    getline(cin,definition);
    string food;
    cout<<"7.If you could only eat one food for the rest of your life, what would it be?";
    getline(cin,food);
    string job;
    cout<<"8.What is your dream job?";
    getline(cin,job);
    cout<<endl;
    cout << "========================================" << endl;
    cout << " YOUR PROFILE SUMMARY" << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Course:"<<course<<endl;
    cout<<"Hobby:"<<hobby<<endl;
    cout<<"Reason:"<<reason<<endl;
    cout<<"Expectation:"<<expectation<<endl;
    cout<<"Programming is:"<<definition<<endl;
    cout<<"Favorite Food:"<<food<<endl;
    cout<<"Dream Job:"<<job<<endl;
    cout<<endl;
    cout << "========================================" << endl;
    cout << " Great job, " << name << "! You are on your way to becoming a programmer!:D (or running mad xD) " << endl;
    cout << "========================================" << endl;

    return 0;
}