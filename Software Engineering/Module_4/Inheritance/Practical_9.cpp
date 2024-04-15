#include<iostream>
using namespace std;

class A{
    public:
    int arr[4] = {10,20,30,40};
    int arr2[4] = {70,80,90,60};
    int result[4];

    A operator+(){
        for (int i = 0; i < 4; i++)
        {
            result[i] = arr[i] + arr2[i];
        }
        
    }
    void  display(){
        for (int i = 0; i < 4; i++)
        {
            cout<<result[i]<<endl;
        }
        
    }
};

int main(){
    A obj;
    +obj;
    obj.display();
}