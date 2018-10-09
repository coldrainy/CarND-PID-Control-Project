#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {
    i_error = 0;
    p_error = 0;
    d_error = 0;
}

PID::~PID() {}

void PID::Init(double kp, double ki, double kd) {
   Kp = kp;
   Ki = ki;
   Kd = kd;
}

void PID::UpdateError(double cte) {
    d_error = cte - p_error;
    p_error = cte;
    i_error += cte;
}

double PID::TotalError() {
    return i_error+p_error+d_error;
}

