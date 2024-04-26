#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cmath>

double calculate(double num1, char op, double num2) {
    switch (op) {
    case '+': return num1 + num2;
    case '-': return num1 - num2;
    case '*': return num1 * num2;
    case '/': return num2 == 0 ? NAN : num1 / num2;
    default: return 0;
    }
}

bool processLine(const std::string& line, double& result) {
    std::istringstream iss(line);
    double num1, num2, num3;
    char op1, op2;

    if (line.find('(') != std::string::npos) {
        char discard;
        iss >> discard >> num1 >> op1 >> num2 >> discard >> op2 >> num3;
        double interimResult = calculate(num1 , op1, num2);
        result = calculate(interimResult, op2, num3);
    }
    else {
        iss >> num1 >> op1 >> num2 >> op2 >> num3;
        if ((op1 == '+' || op1 == '-') && (op2 == '/' || op2 == '*')) {
            double interimResult = calculate(num2, op2, num3);
            result = calculate(num1, op1, interimResult);
        }
        else {
            double interimResult = calculate(num1, op1, num2);
            result = calculate(interimResult, op2, num3);
        }
    }

    return iss.good();
}

void calculateResults(const std::string& inputFile, const std::string& outputFile) {
    std::ifstream inf(inputFile);
    std::ofstream outf(outputFile);
    std::string line;

    while (std::getline(inf, line)) {
        double result;
        if (processLine(line, result)) {
            outf << line << " " << result << std::endl;
            cout<< line << " " << result << std::endl;
        }
        else {
            outf << "Error processing: " << line << std::endl;
        }
    }
}