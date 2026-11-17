#include<iostream>

#include<string>

#include<iomanip>
using namespace std;

int main() {
    string studentName;
    string course;
    int score1,score2,score3;
    int totalScore;
    double average;
    double percentage;
    const int MAX_SCORE=100;

    cout<<"========================================="<<endl;
    cout<<"STUDENT SCORE CALCULATOR :D"<<endl;
    cout<<"========================================="<<endl;
    cout<<endl;
    cout<<"Enter student name:";
    getline(cin,studentName);
    cout<<"Enter course (BBIT/BCS):";
    getline(cin,course);
    cout<<"Enter score for Test 1:";
    cin>>score1;
    cout<<"Enter score for Test 2:";
    cin>>score2;
    cout<<"Enter score for Test 3:";
    cin>>score3;

    totalScore=score1+score2+score3;
    average=totalScore/3.0;
    percentage=(totalScore/300.0)*100;

    cout<<endl;
    cout<<"========================================="<<endl;
    cout<<"REPORT CARD"<<endl;
    cout<<"========================================="<<endl;
    cout<<endl;

    cout<<"Student: "<<studentName<<endl;
    cout<<"Course:"<<course<<endl;
    cout<<endl;
    cout<<"Test 1: " <<score1<<"/"<<endl;
    cout<<"Test 2: " <<score2<<"/"<<endl;
    cout<<"Test 3: " <<score3<<"/"<<endl
    cout<<endl;

    cout<<"Total: " <<totalScore<<"/"<<endl;
    cout<<"Average: " <<fixed<<setprecision(2)<<average<<endl;
    cout<<"Percentage: " <<fixed<<setprecision(2)<<percentage<<"%"<<endl;
    cout<<endl;

    if (percentage >= 50) {
     cout << "Result: PASS" << endl;
    } else {
     cout << "Result: FAIL" << endl;
    }
     cout << "========================================" << endl;

    return 0;
}