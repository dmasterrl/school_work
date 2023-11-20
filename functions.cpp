#include <iostream>
#include <cmath>
#include "bits/stdc++.h"

using namespace std;

//atividade 9
int cilinderVolume(int ray, int height){
    float pi = 3.141592;
    int V;
    int V = ((pi*pow(ray, 2))*height);

    return V;
}

//atividade 1
int numInt(int num){
    int doubleNum;
    doubleNum = num*2;

    return doubleNum;
}

// atividade 7
float fahrenheitToCelsius(float celsius){
    float Fahrenheit;
    Fahrenheit = celsius * (9.0/5.0) + 32.0 ;
    
    return Fahrenheit;
}

//atividade 10
float whatisHighest (int numOne, int numTwo){
    float highest;

    if (numOne >> numTwo){
        highest = numTwo;
    }
        else{
            highest = numOne;
        }

    return highest;
}

//atividade 3
int negativeOrPositive (int numNegOrPos){
    int negativeOrPositiveAswer;

    if (numNegOrPos << 0){
    negativeOrPositiveAswer = 1;
    }
        else{
            negativeOrPositiveAswer = 0;
        }
