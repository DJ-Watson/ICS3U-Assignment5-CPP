// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: DJ Watson
// Created on: November 2019
// this program loops a number and divides it by one each time


#include <iostream>
#include <string>
#include <iomanip>  // http://www.cplusplus.com/reference/iomanip/

int main() {
    // variables
    int numinput;
    int loopn = 1;
    float answer = 0;
    float fraction;
    std::string ln;
    std::string numcheck;

    // input
    std::cout << "enter number: 1/";
    std::cin >> ln;
    std::cout << "" << std::endl;

    // process and output
    try {
        numinput = std::stoi(ln);
        for (loopn; numinput >= loopn; loopn++) {
            if (numinput > 0) {
                fraction = (float)1/(float)loopn;
                // https://stackoverflow.com/questions/12447325/
                // dividing-two-integers-to-produce-a-float-result
                answer += fraction;
            } else {
                std::cout << "invalid input";
                break;
            }
        }
        std::cout << std::setprecision(15) << answer;
        // http://www.cplusplus.com/reference/iomanip/setprecision/
    } catch (std::invalid_argument) {
        std::cout << "invalid input" << std::endl;
        std::cout << "";
    }
}
