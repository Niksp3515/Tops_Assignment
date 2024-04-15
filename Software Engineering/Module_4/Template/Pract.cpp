#include<iostream>
using namespace std;

class A{
    public:
    template <typename T,typename Q>
    void Sort(Q arr[],T n){



        for (T i = 0; i < n; i++)
        {
            for (T j = i+1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    Q temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
                
            }
            
        }
        for (T i = 0; i < n; i++)
        {
            //printf("%f ",arr[i]);
            cout<< "   "<<arr[i];
        }
        
        
    }
};

int main(){
    float a[]={5.6,3.7,8.2,2.7,9.3};
    A obj;
    obj.Sort<int>(a,5);
}