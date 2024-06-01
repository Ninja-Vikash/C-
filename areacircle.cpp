#include<iostream>
using namespace std;
int main(){
    const float PI = 3.14;
    float radius, area;
    cout << "Enter radius : ";
    cin >> radius;
    area = PI * radius * radius;
    cout << "Area of circle : "<< area;
}