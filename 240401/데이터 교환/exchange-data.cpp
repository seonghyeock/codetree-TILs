#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a=5;
    int b=6;
    int c=7;

    int tmp1=a;
    int tmp2=b;
    a=c;
    b=tmp1;
    c=tmp2;
    cout<<a<<"\n"<<b<<"\n"<<c;
    return 0;
}