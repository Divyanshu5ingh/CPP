#include<iostream>
#include<string>

using namespace std;

class MyClass {
    public:
    
    void myMethod();
};

void MyClass :: myMethod()
{
    cout<<"Hello this is divyanshu";
}

int main(){
    MyClass myObj;
    myObj.myMethod();
    return 0;
}