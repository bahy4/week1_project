#include <math.h>

AnswerHandler my_sin(double x) {
    AnswerHandler ans;
    ans.x=x;
    ans.y=x-pow(x,3)/6+pow(x,5)/120-pow(x,7)/5040;
    return ans;
}