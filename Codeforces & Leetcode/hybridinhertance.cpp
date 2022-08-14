#include<iostream>
using namespace std;

class Student
{
    protected:
    int roll_number;
    public:
    void get_number(int a){
        roll_number = a;
    }
    void put_number(){
        cout<<"Roll number = "<<roll_number<<endl;
    }
};

class test : public Student
{
    protected:
    float p1,p2;
    public:
    void get_marks(float x, float y){
        p1 = x;
        p2 = y;
    }
    void put_marks(){
        cout<<"Marks in part 1: "<<p1<<endl;
        cout<<"Marks in part 2: "<<p2<<endl;
    }
};

class sports
{
    protected:
    float score;
    public:
    void get_score(float a){
        score = a;
    }
    void put_score(){
        cout<<"Score: "<<score<<endl;
    }
};

class result : public test,public sports
{
    float total;
    public:
    void display();
};

void result ::display(){
    total = p1 + p2 + score;
    put_number();
    put_marks();
    put_score();
    cout<<"Result: "<<total;
}

int main(){
    result r1;
    int n;
    float m[5],s;
    cout<<"Enter your roll number: "<<endl;
    cin>>n;
    r1.get_number(n);
    cout<<"Enter marks in part1 and part2: "<<endl;
    cin>>m[1]>>m[2];
    r1.get_marks(m[1],m[2]);
    cout<<"Enter your score in sports: "<<endl;
    cin>>s;
    r1.get_score(s);
    r1.display();
    return 0;

}
