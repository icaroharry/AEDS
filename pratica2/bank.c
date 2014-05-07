//constants
#define IMDMF 0.00038
#define IDDMF 0.0017
#define yield 0.0133
#define defaultTax 0.51 //R$0,51

float deposit(float currentValue, float depositedValue){
    currentValue -= currentValue*IMDMF; //Imposto Maluco do Mundo Fictício
    currentValue += depositedValue;
    return currentValue;
}

float withdrawal(float currentValue, float withdrawnValue){
    currentValue -= withdrawnValue - withdrawnValue*IDDMF; //Imposto Doido do Mundo Fictício
    return currentValue;
}

float readjustment(float currentValue){
    currentValue += currentValue*yield;
    currentValue -= defaultTax;
    return currentValue;
}

