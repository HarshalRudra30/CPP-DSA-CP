#include<iostream>
using namespace std;

class Shop
{
private:
    int itemId[100];
    int itemPrice[100];
    int counter;
public:
    void initcounter(void){counter = 0;}
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(){
    cout<<"Enter item id "<<(counter + 1)<<endl;
    cin>>itemId[counter];
    cout<<"Enter item price: ";
    cin>>itemPrice[counter];
    counter++;
    
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price for the item id "<<itemId[i]<<" is: "<<itemPrice[i]<<endl;
       
    }    
}

int main(){
    Shop s;
    s.initcounter();
    s.setPrice();
    s.setPrice();
    s.setPrice();
    s.displayPrice();
    return 0;
}
