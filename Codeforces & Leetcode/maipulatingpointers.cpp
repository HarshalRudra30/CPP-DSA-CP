#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr;
    ptr = &a;
    cout<<"Value of a: "<<a;
    cout<<endl;
    *ptr = (*ptr/2);
    cout<<"Value of a: "<<(*ptr);
    return 0;

}

// NOTE THAT PTR ONLY CHANGES THE MEMORY CONTENTS AND NOT THE MEMORY ADDRESS ITSELF IN THIS PROGRAM
/* BEFORE DEFERENCING A POINTER IT IS ESSENTIAL THAT YOU ASSIGN A VALUE TO THE POINTER.
   IF YOU TRY TO DEFERENCE A UNINITIALEZED POINTER THEN IT WILL SHOW A RUN TIME ERROR BY REFERING TO ANY OTHER MEMORY LOCATION 
