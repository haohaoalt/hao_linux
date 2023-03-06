#include<iostream>
#include<memory>
using namespace std;
int main(){
    int a = 10;
    cout << &a << endl;
    std::cout << std::make_shared<int>(a) << std::endl;
    std::shared_ptr<int> ptra = std::make_shared<int>(a);
    std::shared_ptr<int> ptra2(ptra);
    return 0;
}