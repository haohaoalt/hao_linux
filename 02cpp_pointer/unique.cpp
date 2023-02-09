#include<iostream>
#include<string>
#include<memory>
using namespace std;

void f1(){
    unique_ptr<int> p(new int(5));
    cout << *p << endl;
    cout << "test --- " << endl;
    // unique_ptr<int> p2(p);
    // unique_ptr<int> p3 = p;
}
int main(){
    void f1();
    cout << "main test " << endl;
    return 0;
}