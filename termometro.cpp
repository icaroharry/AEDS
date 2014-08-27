#include <iostream>
#include <string>
#include <cstdlib>


using namespace std;

class Termometro {
    protected:
        string nome;
        float temperatura;

    public:
        float getTemperatura(){ //getter
            return temperatura;
        }

        void setTemperatura(float temp) { //setter
            temperatura = temp;
        }

};

class TermometroKelvin : Termometro {
    public:
        float getTemperatura() {
            Termometro::getTemperatura();
        }

        TermometroKelvin() { //construtor
            nome = "Kelvin";
        }

        TermometroKelvin(float temp) { //construtor
            nome = "Kelvin";
            temperatura = temp;
        }
};

//Esta classe é uma coleção de 3 termômetros que pode ser utilizada
//para fazer contas com eles. No caso, o método mediaTemperatura()
//calcula a média da temperatura dos 3 termônetros;
class ColecaoTermometros {
    private:
        TermometroKelvin termometros[3];

    public:
        ColecaoTermometros(TermometroKelvin term[]){ //construtor
	        for(int i = 0; i < 3; i++) {
                termometros[i] = term[i];
	        }
        }

        float mediaTemperatura() {
            TermometroKelvin* pont = termometros;
            float soma = 0;
            for(int i = 0; i < 3; i++) {
                soma += termometros[i].getTemperatura(); //acessa o vetor utilizando ponteiro
            }
            return soma/3;
        }
};

int main(){
    TermometroKelvin kelvin[3];
    kelvin[0] = TermometroKelvin(312);
    kelvin[1] = TermometroKelvin(233);
    kelvin[2] = TermometroKelvin(300);

    ColecaoTermometros colecao(kelvin);

    cout << colecao.mediaTemperatura();
    return 0;
}
