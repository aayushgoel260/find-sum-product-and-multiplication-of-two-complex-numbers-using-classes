#include<iostream>
using namespace std;
class complex{
    private:
    int real;
    int img;
    public:
    void input();
    void display();
    complex add(complex a);
    complex sub(complex a);
    complex multiply(complex a);

};
void complex::input()
{
    cout<<"Enter real part";
    cin>>real;
    cout<<"Enter imaginary";
    cin>>img;
}
void complex::display(){
    if(img>=0){
        cout<<real<<"+"<<img<<"i\n"; 
    }
    else{
        cout<<real<<img<<"i\n";
    }
}
complex complex :: add(complex a){
    complex Res;
    Res.real=real+a.real;
    Res.img=img+a.img;
    return Res;
}
complex complex :: sub(complex a){
    complex Res;
    Res.real=real-a.real;
    Res.img=img-a.img;
    return Res;
}
complex complex :: multiply(complex a){
    complex Res;
    Res.real=real*a.real;
    Res.img=img*a.img;
    return Res;
}
int main(){
    complex A,B,C;
    A.input();
    B.input();
    C=A.add(B);
    C.display();
    C=A.sub(B);
    C.display();
    C=A.multiply(B);
    C.display();
}