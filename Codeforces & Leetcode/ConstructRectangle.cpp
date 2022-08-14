    #include<iostream>
    using namespace std;

    int main(){
        int t;
        cin>>t;
        while(t--){
            int l1,l2,l3;
            cin>>l1>>l2>>l3;
            int min1 = min(l1,l2);
            int min2 = min(min1,l3);
            int max1 = max(l1,l2);
            int max2 = max(max1,l3); 
            int sum = (l1+l2+l3) - (max2+min2);
            if((l1 == l2 && l3%2==0) ||( l2 == l3 && l1%2 ==0) ||( l1 == l3 && l2%2==0)){
                cout<<"YES"<<endl;
            }
            else if(max2-min2 == sum){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        return 0;
    }