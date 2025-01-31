#include <string>
#include <vector>

using namespace std;

//uma transicao possui o que e consumido, o nome do estado de destino e uma flag indicando se e final
struct Transicao {
	string consome;
	string destino;
	bool final;
};

//Um estado possui um nome e uma lista de transicoes
struct Estado {
	string nome;
	bool final;
	vector<Transicao> transicoes;
};

//Um automato possui uma lista de estados
struct Automato {
	string inicio;
	vector<Estado> S;
};
