#include "funcionario.h"

class Pagamento {
    private:
        int _total_comissao;
        double _salario_final;
    public:
    Pagamento ();
    // calcular o salario no final do mes;
    double totalComissao ();
    double salarioFinal();
        
};