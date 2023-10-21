#include<iostream>
using namespace std;
template <typename T> class Array{
    public:
    T i;
    void display(){
        for(i=0;i<4;i++){
            cout<<i;
        }
    }
};
template<typename T>T myMax(T x, T y){
    return (x>y)? x:y;
}
int main(){
    cout<<myMax(10,20);
    Array<int>a;
    a.display();
}
