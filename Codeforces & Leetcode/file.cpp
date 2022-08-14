#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string st1;
    string st2;
    //OPENING FILE USING CONSTRUCTOR AND WRITING IT:
    cout<<"What do you want to store in the file? "<<endl;
    getline(cin, st1);
    ofstream out("sample1.txt");
    out<<st1;


    //OPENING FILES USING CONSTRUCTOR AND READING IT:
    ifstream in("sample2.txt");
    getline(in, st2);
    cout<<st2;
    return 0;


}