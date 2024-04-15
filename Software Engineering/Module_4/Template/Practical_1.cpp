#include<iostream>
using namespace std;
class A{
    public:
    int a,b;
    template <typename T>
    void Swap(T &a, T &b){
        T temp = a;
        a = b;
        b = temp;
    }    
};
int main(){
    A obj1;
    int x=10,y=20;
    obj1.Swap(x, y); 
    cout << "Swapped values are :"<<x<<" and "<<y<<endl;
}