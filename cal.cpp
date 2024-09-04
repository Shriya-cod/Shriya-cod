#include <iostream>
using namespace std;

float add(float x[], float y[], int size);
float sub(float x, float y);
float mul(float x[], float y[], int size);
float quo(float x, float y);

int main(){
    char op,opt;

    while(true){

    cout <<"Enter oparator: +,-,*,/:";
    cin >> op;

    cout <<"Do u want to change the operator?: Y/N:";
    cin >>opt;

        if (opt == 'N') {
            break;
        } else if (opt == 'Y') {
            continue;
        } else {
            cout << "Invalid option! Please enter Y or N." << endl;
            continue;
        }
    }


    float a,b;
    int size;


switch (op) {

     case '+': {
            cout << "Enter the size of the arrays: ";
            cin >> size;

            float ar[size], br[size];
            cout << "Enter elements of the first array: ";
            for (int i = 0; i < size; i++) {
                cin >> ar[i];
            }
            cout << "Enter elements of the second array: ";
            for (int i = 0; i < size; i++) {
                cin >> br[i];
            }

            float sum = add(ar, br, size);
            cout << "Sum of arrays = " << sum << endl;
            break;
        }
        

    case '-':
            cout << "Enter two numbers: ";
            cin >> a >> b;
            float diff; 
            diff = sub(a, b);
            cout << "Difference = " << diff << endl;
            break;
   

    case '*': {
            cout << "Enter the size of the arrays: ";
            cin >> size;

            float ar[size], br[size];
            cout << "Enter elements of the first array: ";
            for (int i = 0; i < size; i++) {
                cin >> ar[i];
            }
            cout << "Enter elements of the second array: ";
            for (int i = 0; i < size; i++) {
                cin >> br[i];
            }

            float product = mul(ar, br, size);
            cout << "Product of arrays = " << product << endl;
            break;
        }


    case '/':
            cout << "Enter two numbers: ";
            cin >> a >> b;
            float quotient;
            if (b != 0) {
            quotient = quo(a, b);
                cout << "Quotient = " << quotient << endl;
            } else {
                cout << "Error: Division by zero is undefined" << endl;
            }
            break;

    

    default:
    cout <<"Invalid operator";
    break;

}
return 0;

}

float add(float x[], float  y[], int size){
    float sum=0;
    for(int i=0; i<size; i++){
        sum += x[i] + y[i];
    }
    return sum;
}

float sub(float x, float y){
    float diff;
    diff = x - y;
return diff;
}

float mul(float x[], float y[], int size){
    float product=1;
    for(int i=0; i<size; i++){
        product *= x[i]*y[i];
    }

return product;
}

float quo(float x, float y){
return x/y;

}




