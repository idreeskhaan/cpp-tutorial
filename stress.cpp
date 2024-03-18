#include <iostream>
#include <cmath>


int main()
{
    double b= 1.0;
    double h= 0.6;
    double w = 48000;
    double L = 4.0;
    double x = L;
    double y = h/2;
    double E= 200E9;
    double I= b*h*h*h/12;
    double Sxx, Syy, txy;

    double M_max= 384*1000; //max bending moment
    double V_max= 192*1000; //max shear force
    //Sxx= M_max*y/I;
    Sxx= 6*w/std::pow(h, 3)*(L*L - x*x)*y + w*y/h*(4*y*y/(h*h) - 3/5);
    Syy= -w/2*(1+y/h)*std::pow((1-2*y/h), 2);
    txy= -6*w/std::pow(h,3)*x*(h*h/4 - y*y);
    
    std::cout << "I: " << I << std::endl;
    std::cout << "Sxx: " << Sxx << std::endl;
    std::cout << "Syy: " << Syy << std::endl;
    std::cout << "txy: " << txy << std::endl;

    return 0;
}