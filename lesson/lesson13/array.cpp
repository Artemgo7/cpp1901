#include <iostream>
using namespace std;
int getValueFromUser();

int main(){
    const short COUNT = getValueFromUser();
    int arr[COUNT];
    for (int index = 0; index < COUNT; index++){ arr[index] = 0; }

    return 0;
}

int getValueFromUser(){
    cout << "Ведите целочисленое значение: ";
    int al = 0;
    cin >> al;
    return al;
}