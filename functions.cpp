#include <iostream>
#include <cmath>
#include "bits/stdc++.h"

using namespace std;

int cilinderVolume(int ray, int height){
    float pi = 3.141592;
    int V = ((pi*pow(ray, 2))*height);

    return V;
}