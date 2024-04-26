#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include<fstream>
#include<direct.h>
using namespace std;


char generateOperator(bool useAdd, bool useSub, bool useMul, bool useDiv) {
    char operators[4] = { '+', '-', '*', '/' };
    int valid[4] = { useAdd, useSub, useMul, useDiv };
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (valid[i]) count++;
    }
    if (count == 0) return '+';
    int index;
    do {
        index = rand() % 4;
    } while (!valid[index]);
    return operators[index];
}

double generateNumber(int maxNumber, bool useDecimal) {
    double num = rand() % (maxNumber + 1);
    if (useDecimal) {
        num += (rand() % 100) / 100.0;
    }
    return num;
}

void generateQuestions(int numQuestions, int maxNumber, bool useAdd, bool useSub, bool useMul, bool useDiv, bool useParentheses, bool useDecimal) {
    srand(time(NULL));
    ifstream inf;
    ofstream outf;
    string address = _getcwd(NULL, 0);
    address += "\\output";
    mkdir(address.c_str());
    address += "\\output(without anwser).txt";
    std::cout << address << std::endl;
    outf.open(address);

    for (int i = 0; i < numQuestions; i++) {
        double num1 = generateNumber(maxNumber, useDecimal);
        double num2 = generateNumber(maxNumber, useDecimal);
        char op = generateOperator(useAdd, useSub, useMul, useDiv);
        while (op == '/' && num2 == 0) {
            num2 = generateNumber(maxNumber, useDecimal);
        }
        if (useParentheses && rand() % 2) {
            outf << "(" << num1 << " " << op << " " << num2 << ")";
            cout << "(" << num1 << " " << op << " " << num2 << ")";
        }
        else {
            outf << num1 << " " << op << " " << num2;
            cout << num1 << " " << op << " " << num2;
        }
        char nextOp = generateOperator(useAdd, useSub, useMul, useDiv);
        double num3 = generateNumber(maxNumber, useDecimal);
        while (nextOp == '/' && num3 == 0) {
            num3 = generateNumber(maxNumber, useDecimal);
        }
        outf << " " << nextOp << " " << num3;
        cout << " " << nextOp << " " << num3;
        outf << " = _____      \n";
        cout << " = _____      \n";
    }
}
