#include<iostream>
using namespace std;

class Swap{
    private:
    int a,b;

    public:
    void setData(int x,int y){
            a = x;
            b = y;
    }

    friend void swap(Swap &obj);
};

void swap(Swap &obj) {
    obj.a = obj.a ^ obj.b;
    obj.b = obj.a ^ obj.b;
    obj.a = obj.a ^ obj.b;
    cout<<"After Swapped a : "<<obj.a<<" And b :"<<obj.b;
}
int main(){
    Swap s;
    s.setData(10,20);
    swap(s);
}