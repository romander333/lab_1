#include <cmath>
#include <iostream>
using namespace std;


class Calcul {
public:
    double x, y, z, b;


    Calcul(double x_num, double y_num, double z_num) {
        x = x_num;
        y = y_num;
        z = z_num;
        b = y * pow(fabs(((pow(fabs(x), 0.3) / z + y) + pow(tan(x), 2)) * (((x + pow(z, 2)) / (2 * x)) - 1.4)), 1/3) - z * exp(pow(x, 2) - y);
    }


    double calc_a() {
        double n1 = pow(fabs(z), 0.2);
        double n2 = 3 + exp(y - x) + sqrt(pow(fabs(pow(y,2) + b), 0.3));
        double n3 = 1 + pow(x,2) * fabs(y - pow(tan(x),2) * pow(z,2));


        if (n3 != 0) {
            double a = n1 * (n2 / n3);
            return a;
        }
        else {
            cout << "Ïîìèëêà: ä³ëåííÿ íóëü!" << endl;
            
        }
    }
};

int main() {
    setlocale(LC_ALL, "ukr");
    double x_s = -1;
    double x_e = 1;
    double x_d = 0.2;

    for (double x_val = x_s;x_val <= x_e;x_val += x_d) {
        const double EPSILON = 1e-10; 
        if (fabs(x_val) < EPSILON) {
            x_val = 0;
        }

        Calcul calcul(x_val, 4.23, -11.88);
        double result_a = calcul.calc_a();
        double result_b = calcul.b;
        cout << "x = " << x_val << ",    a =   " << result_a << ",    b = " << result_b << endl;



    }
    return 0;
}
