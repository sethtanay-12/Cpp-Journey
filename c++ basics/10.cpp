#include <iostream>
#include <cmath>


int main () {
    double c = 5;
    double h = 6;
    double b;
     
     b = std::max (c , h);//for giving out the max term from the two

      std::cout << b <<'\n';


       b = std::min (c , h);//for giving out the min value from the two

        std::cout << b <<'\n';


        b = pow(2 , 3);//power to something

        std::cout << b <<'\n';



        b = sqrt(9);//square root

        std::cout << b <<'\n';



        b = abs(-9);//absolute value of an integer

        std::cout << b <<'\n';



        b = round(3.14);//roundoff value 

        std::cout << b <<'\n';


        b = ceil(3.14);//rounds up always

        std::cout << b <<'\n';



        b = floor(3.14);//rounds down always

        std::cout << b <<'\n';

}