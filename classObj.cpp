#include<iostream>
#include<string>
using namespace std;

class MyClass {
    public:
    int myNum;
    string myString;
};

int main()
{
    MyClass myObj;
    
    myObj.myNum = 15;
    myObj.myString = "Divyanshu Kumar";
    
    cout<<"My age is\t"<<myObj.myNum<<endl;
    cout<<"My name is\t"<<myObj.myString;
    return 0;
}