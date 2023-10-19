#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Transacao{
    private:
        string data;
        double valor;
        string descricao;
};
class Conta
{
private:
   string nome;
   int numero_conta;
   double saldo;
   vector <Transacao> transacoes;

public:
    Conta(/* args */);
    ~Conta();
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

Poupanca::Poupanca(/* args */)
{
}

Poupanca::~Poupanca()
{
}

Limite::Limite(/* args */)
{
}

Limite::~Limite()
{
}

Comum::Comum(/* args */)
{
}

Comum::~Comum()
{
}

Conta::Conta(/* args */)
{
}

Conta::~Conta()
{
}

