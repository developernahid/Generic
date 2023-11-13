#include <iostream>
using namespace std;
class student{
    protected:
    string  name;
    int id;
    private:
    void getData(){
        cout<<"Info"<<endl;
        cin>>name;
        cin>>id;
    }
    void show_Data(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
    }
};
class Course: public student{
    private:
    int courseid;
    protected:
    void getData(){
        cout<<"Student Infromation"<<endl;
        cin>>courseid;
        cout<<"Course id: "<<<endl;
    }
    void show_Data(){
        cout<<"Course id: "<<courseid<<endl;
    }
};
int main(){
    Course C1;
    C1.getData();
    C1.show_Data();
    return 0;
}