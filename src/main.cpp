#include <iostream>

#include "../include/lib.hpp"
using namespace std;
using namespace liba;

class Complex
{
    public:
        Complex()
{
     this->imag = 0;
     this->real = 0;
};
       Complex(int r, int i)
{
     this->imag = i;
     this->real = r;
};
     int  getReal(){
    return this->real;
};
     int getImag(){
    return this->imag;
}
;
     void displayComplex(){
    cout<<this->real<<" + "<<this->imag<<" j"<<endl;

}
    Complex operator+(Complex c2){
        Complex comp;
        comp.real = this->real + c2.real;
        comp.imag = this->imag + c2.imag;
        return comp;
    }
    Complex operator-(Complex c2){
        Complex comp;
        comp.real = this->real - c2.real;
        comp.imag = this->imag - c2.imag;
        return comp;
    }
    Complex operator*(Complex c2){
        Complex comp;
        comp.real = this->real * c2.real ;
        comp.imag = this->imag * c2.imag ;
        return comp;
    }
    Complex operator/(Complex c2){
        Complex comp;
        comp.real = this->real / c2.real;
        comp.imag = this->imag / c2.imag;
        return comp;
    }
    Complex& operator=(Complex c2){
        this->real = c2.real;
        this->imag = c2.imag;
        return *this;
    }   
    Complex& operator+=(Complex c2){
        this->real += c2.real;
        this->imag += c2.imag;
        return *this;
    }
    Complex& operator-=(Complex c2){
        this->real -= c2.real;
        this->imag -= c2.imag;
        return *this;
    }
    Complex& operator*=(Complex c2){
         this->real *= c2.real;
        this->imag *= c2.imag;
        return *this;
    }
    Complex operator/=(Complex c2){
        this->real /= c2.real;
        this->imag /= c2.imag;
        return *this;
    }
    Complex& operator++(){
        this->real++;
        this->imag++;
        return *this;
    }
    Complex& operator++(int){
        Complex comp = *this;
        this->real++;
        this->imag++;
        return comp;
    }
    Complex& operator--(){
        this->real--;
        this->imag--;
        return *this;
    }
    Complex& operator--(int){
        Complex comp = *this;
        this->real--;
        this->imag--;
        return comp;
    }

    int  operator[](int index){
        
        if(index == 0){
           return this->real;     
        }
        else if(index == 1){
            
            return this->imag;
        }
        
    }


    friend istream& operator>>(istream& in,  Complex &comp);

    protected:

    private:
        int imag;
        int real;
};

    ostream& operator<< (ostream& out,  Complex &comp){
        return out<<" " <<comp.getReal()<<" "<< comp.getImag()<<" ";
    }
    istream& operator>>(istream& in,  Complex & comp){
       return in >> comp.real>>comp.imag;
    }

int main()
{
    cout << "Hello ITIAN!!!" << endl;
    Complex c1;
 //   cout<<c1.getImag()<<endl;
    Complex c2(0,-10);
   // c2.displayComplex();
    //cout<<c2[1]<<endl;
  
    cin>>c2;
    cout<<c2;
    return 0;
}
