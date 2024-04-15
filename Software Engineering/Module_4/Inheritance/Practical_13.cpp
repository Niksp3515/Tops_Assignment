#include<iostream>
using namespace std;

class Max{
    private:
    int a,b;

    public:
    void setData(int x,int y){
            a = x;
            b = y;
    }

    friend void max(Max &obj);
};

void max(Max &obj) {
    if (obj.a > obj.b)
    {
        cout<<"Maximum Number is : "<<obj.a;
    }
    else{
        cout<<"Maximum Number is : "<<obj.b;
    }
    
}
int main(){
    Max m;
    m.setData(56,78);
    max(m);
}