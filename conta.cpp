#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Transacao{
    private:
        string data;
        double valor;
        string descricao;
    public:
        Transacao();
        ~Transacao();
        string getData();
        void setData(string _data);
        int getValor();
        void setValor(double _valor);
        int getDescricao();
        void setDescricao(string _descricao);
};
class Conta
{
private:
   string nome;
   int numero_conta;
   double saldo;
   vector <Transacao> transacoes;

public:
    Conta();
    ~Conta();
    string getNome();
    void setNome(string _nome);
    int getNumeroConta();
    void setNumeroConta(int _numero);
    virtual void extrato() const = 0;
    virtual void deposito();
    virtual void retirada();
};
class Comum : Conta
{
public:
    Comum(/* args */);
    ~Comum();
    void extrato() const override;
};
class Limite : Conta
{
private:
    double valor_limite;
public:
    Limite(/* args */);
    ~Limite();
    void extrato() const override;
    void retirada();
};
class Poupanca : Conta
{
private:
    string data_dia_aniversario;
public:
    Poupanca(/* args */);
    ~Poupanca();
    void extrato() const override;
};

Poupanca::Poupanca()
{
}

Poupanca::~Poupanca()
{
}

Limite::Limite()
{
}

Limite::~Limite()
{
}

Comum::Comum()
{
}

Comum::~Comum()
{
}

Conta::Conta()
{
    nome = "";
    numero_conta = 0;
}
void Conta :: deposito(){

}
void Conta :: retirada(){

}
Conta::~Conta()
{
}

    string Conta:: getNome()
    {
        return nome;
    }
    void Conta :: setNome(string _nome)
    {
        nome = _nome;
    }
    int Conta :: getNumeroConta()
    {
        return numero_conta;
    }
    void  Conta:: setNumeroConta(int _numero)
    {
        numero_conta = _numero;
    }

        string Transacao :: getData()
        {
            return data;
        }
        void Transacao :: setData(string _data)
        {
            data = _data;
        }
        int Transacao :: getValor()
        {
            return valor;

        }
        void Transacao :: setValor(double _valor)
        {
            valor = _valor;
        }
        int Transacao :: getDescricao()
        {
            return descricao;
        }
        void Transacao :: setDescricao(string _descricao)
        {

        }
int main(){

    return 0;
}