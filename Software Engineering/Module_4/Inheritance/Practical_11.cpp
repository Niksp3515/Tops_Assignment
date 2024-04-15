#include<iostream>
using namespace std;
class Main{
    public:

    void Area(int length,int width){
        int area = length * width;
        cout<<"The area of Rectangle is : "<<area;
    }

    void Area(double height,double width){
        double area = 1/2*(height * width);
        cout<<"The area of Triangle is : "<<area;
    }
    void Area(float radius){
        float area = 3.14 * radius * radius;
        cout<<"The area of Circle is : "<<area;
    }
    
}m;


int main(){
    m.Area(20,10);
}