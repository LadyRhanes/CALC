#include <iostream>

using namespace std;
double cube(double num1){
double result=num1*num1*num1;
return result;
}
double five(double num1){
double result=num1*num1*num1*num1*num1;
return result;
}


int main()
{
    double num1;
    double num2;
    double result;
    char op;
    int num1pow3=num1*num1*num1;
    int num1pow5=num1*num1*num1*num1*num1;
    int index;
    cout<<"Type an integer:";
    cin>>num1;
    cout<<"Type another integer:";
    cin>>num2;
    cout<<"Type an operation(Use 's' for sin):";
    cin>>op;
    if(op=='+'){
        return num1+num2;
  }else if(op=='-'){
        return num1-num2;
   }else if(op=='*'){
        return num1*num2;
}else if(op=='/'){
return num1/num2;

}else if(op=='^'){
   int result = 1;
 for(int i =0;i<num2;i++){
    result = result*num1;}

    return result;

}else if(op=='s'){
         cout<<"This only gives sin(integer 1),which is approximate and not very accurate(Uses Taylor Series only upto x^5)";
return  num1 - cube(num1)/6.0 +five(num1)/120.0 ;
}





    return 0;
    }
