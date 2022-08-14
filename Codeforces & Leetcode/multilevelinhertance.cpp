#include<iostream>
using namespace std;

class Student
{
    protected:
        int roll_number;
    public:
    void get_number(int);
    void put_number();
};
void Student ::get_number(int a){
        roll_number = a;
}
void Student ::put_number(){
    cout<<"Roll number = "<<roll_number<<endl;
}

class test : public Student
{
    protected:
    float sub1,sub2;
    public:
    void get_marks(float, float);
    void put_marks(void);
};
void test ::get_marks(float x, float y){
    sub1 = x;
    sub2 = y;
}
void test ::put_marks(){
    cout<<"Marks in sub1: "<<sub1<<endl;
    cout<<"Marks in sub2: "<<sub2<<endl;
}

class result : public test{
    float total;
    public:
    void display();
};

void result ::display(){
    total = sub1 + sub2;
    put_number();
    put_marks();
    cout<<"Total = "<<total<<endl;
}

int main(){
    result student1;
    float m1,m2;
    int r;
    cout<<"Enter roll number: ";
    cin>>r;
    student1.get_number(r);
    cout<<"Enter marks in 2 subjects: ";
    cin>>m1>>m2;
    student1.get_marks(m1,m2);
    student1.display();
    return 0;
}