#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

float tent_Map(double R, double xt);
float sine_Map(double R, double xt);
float logistic_Map(double R, double xt);

int main(void)
{
    ofstream outfile;
    for(int i=0; i<20000; i++)
    {
        
    }
    
    
}

float tent_Map(double R, double xt)
{
    float xt_1;
    float seleccionado;
    double resta = 1-xt_1;
    if(xt<resta)
    {
        seleccionado = xt;
    }
    else
    {
        seleccionado = resta;
    }
    xt_1 = R*seleccionado;
    
    return xt_1;
    
}


float sine_Map(double R, double xt)
{
    float xt_1;
    float seleccionado;
    xt_1 = R * sin(M_PI * xt);
    return xt_1;
}

float logistic_Map(double R, double xt)
{
    float xt_1;
    double resta = 1 - xt;
    xt_1 = R * xt * resta;
    return xt_1;
}