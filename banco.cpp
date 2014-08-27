#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>


using namespace std;

class ContaBancaria {
    protected:
        float saldo;

    public:
        float getSaldo(){ //getter
            return saldo;
        }

        void setSaldo(float sal) { //setter
            saldo = sal;
        }

};

class ContaCorrente : ContaBancaria {
    public:
        ContaCorrente(float sal){
            saldo = sal;    
        }
		
		ContaCorrente() {}
		        
        float getSaldo() {
            ContaBancaria::getSaldo();
        }

        void setSaldo(float sal) {
            ContaBancaria::setSaldo(sal);
        }

        void sacar(float dinheiro) {
            if(dinheiro <= saldo) {
                saldo -= dinheiro;
                cout << "Você sacou " << dinheiro << "reais" << endl;
            }
            else {
                cout << "Saldo insuficiente!" << endl;
            }
        }

        void depositar(float dinheiro) {
            saldo += dinheiro;
            cout << "Você depositou " << dinheiro << "reais" << endl;
        }



};

class Cliente {
    private:
        ContaCorrente conta;


    public:
    	Cliente();
        Cliente(ContaCorrente con){ //construtor
            conta = con;
        }

        void salvar() {
            ofstream arq;
            arq.open("conta.dat", ios::binary | ios::app);
            if(arq.fail()==1) {
                cout << "Erro no arquivo";
                exit(1);
            }
            arq.write(reinterpret_cast<char*>(&conta), sizeof(ContaCorrente));
            arq.close();
        }

        void lerContas() {
            ifstream infile;
            infile.open("conta.dat", ios::binary);
            if (infile.is_open() && infile.good()) {
                infile.read(reinterpret_cast<char*>(&conta),sizeof(conta));
                infile.close();
            }
        }

};

int main(){
    ContaCorrente* conta1 = new ContaCorrente(0);
    ContaCorrente* conta2 = new ContaCorrente(0);
    conta1->depositar(100.50);
    conta1->sacar(12);
    conta2->depositar(50);
    conta2->sacar(100);
    
    //ContaCorrente vetor[2];
    //vetor[0] = conta1;
    //vetor[1] = conta2;
    Cliente* cliente = new Cliente(*conta1);
    cliente->salvar();
    
    cliente->lerContas();
    return 0;
}

