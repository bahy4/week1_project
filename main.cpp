#include <iostream>
#include <ans_handler.hpp>
#include <my_math.hpp>

using namespace std;

int main (){
    double x;
    cin>>x;
    cout<<my_sin(x).x<<" "<<my_sin(x).y;
}