//
//  Polynomial.h
//  cs200assignment8
//
//  Created by Hamza Kassem on 5/18/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#ifndef Polynomial_h
#define Polynomial_h

class Polynomial
{
private:
    double *coeff;
    int degree; //this is the degree of the polynomial (i.e. one less then the length of the array of coeff)

public:
    Polynomial();
    Polynomial(double coeffs[] , int nterms);
    Polynomial(Polynomial&);
    Polynomial(double); //the constructor to initialize a polynomial
    ~Polynomial() { delete coeff; } //the deconstructor to clear up the allocated memory

//the operations to define for the Polynomial class
    Polynomial operator+(Polynomial p) const;
    Polynomial operator-(Polynomial p) const;
    Polynomial operator*(Polynomial p) const;
    Polynomial printPloyNomial() ;

};


Polynomial::Polynomial()
{
    degree = 0;
    coeff = new double[degree + 1];
    coeff[0] = 0;
}

//Initialize a polynomial
Polynomial::Polynomial(double coeffs[], int nterms){
degree = nterms;
coeff = new double[degree]; //array to hold coefficient values
for(int i = 0; i < degree; i++)
coeff[i] = coeffs[i];
}

Polynomial::printPloyNomial(){
degree = nterms;
  
for(int i = 0; i < degree; i++)
cout << coeff[i] ;
}

Polynomial::Polynomial(Polynomial&){

}

//The constructor to initialize a polynomial equal to the given constant
Polynomial::Polynomial(double){

}

Polynomial::operator *(Polynomial p) const{

}

Polynomial::operator +(Polynomial p) const{

}

Polynomial::operator -(Polynomial p) const{

}
#endif /* Polynomial_h */
