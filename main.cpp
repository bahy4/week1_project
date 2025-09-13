#include <iostream>
#include <ans_handler.hpp>
#include <my_math.hpp>

using namespace std;

int main (){
    double x;
    cin>>x;
    AnswerHandler ans = my_sin(x);
    ans.print();
}