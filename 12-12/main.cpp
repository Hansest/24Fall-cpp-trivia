#include <iostream>
#include "myComplex.h"
using namespace std;

int main() {
    double re1, im1, re2, im2;
    cout << "��ֱ���������������ʵ�����鲿��";
    cin >> re1 >> im1 >> re2 >> im2;
    // auto c1 = create(re1, im1), c2 = create(re2, im2);
    auto c1 = complexT(re1, im1), c2 = complexT(re2, im2);
    cout << "��Ӻ�Ľ��Ϊ��";
    c1.add(c2).display();
    cout << "��˺�Ľ��Ϊ��";
    c1.multi(c2).display();
    return 0;
}