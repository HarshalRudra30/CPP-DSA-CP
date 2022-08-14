#include<iostream>
#include<cmath>
using namespace std;

class Points
{
    int x,y;
    public:
        Points(int a, int b){
            x=a;
            y=b;
        }
        void displayPoints(){
            cout<<"Point is: ("<<x<<", "<<y<<")"<<endl;

        }
    friend void distance(Points , Points);

};

 void distance(Points o1, Points o2){
    float dist;
    int x = (o2.x - o1.x), y = (o2.y - o1.y);
    dist = pow(x,2) + pow(y,2);
    float result = sqrt(dist);
    return result;   
}

int main(){
    Points p1(0,6),p2(0,0);
    p1.displayPoints();
    p2.displayPoints();
    cout<<"Display between two points is: "<<distance(p1,p2);
    return 0;

}