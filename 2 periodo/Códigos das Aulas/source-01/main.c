#include <stdio.h> 

/*Paradigma de programação Procedural -> Baseado em chamadas a procedimentos (subrotinas)
	-> Funções: São subrotinas que precisam ao término de sua execução, retornar uma respota ou resultado.
	-> Procedimentos: São subrotinas que não retornam nenhum resultado.
		-> Escopo de variáveis
			-> Local: Parâmetros ou variáveis declaradas dentro da subrotina. Elas só existem dentro da subrotina.
			-> Global: Variáveis declaradas fora de subrotinas. Elas são acessadas (existem) de qualquer parte do código.
		-> Passagem de parâmetros: Um parâmetro é uma variável local que é declarada entre "()" e cujos valores devem ser inseridos no momento que a subrotina for chamada.
			-> Por valor: uma cópia do valor é passado para o parâmetro
			-> Por Referência: o endereço de memória da variável é passada para o parâmetro

Best practices de Programação
	1. Coesão
		-> Objetivo: ter subrotinas que tenham alta capacidade de serem reutilizadas
		-> Deseja-se sempre ter alta coesão
		-> Como ?
			1. Utilizando apenas variáveis que estejam (foram declaradas) no escopo da subrotina. 
			2. Single Responsability Principle - Príncipio da responsabilidade única ou seja, cada subrotina deve ter somente um objetivo (responsabilidade).
	2. Baixo Acoplamento
		-> Objetivo: evitar que subrotinas sejam dependentes de variáveis globais ou de outras funções.
		-> Como ?
			1. Criando subrotinas coesas
			2. Evitando (quando possível) a chamada interna de outra subrotinas.

SINTAXE DE UMA SUBROTINA
tipoRetorno nome(parâmetros){
	[return]
}
*/

int A,B;
//procedimento
void menu(){
	printf("\n\nSelecione uma das opções abaixo:\n"); 
	printf("1. Cadastrar aluno\n");
	printf("2. Buscar aluno\n");
	printf("3. Excluir aluno\n");
}

//função não coesa e com acoplamento
int somar(){
	int C = A + B;
	return C;
}

_Bool validarDados(int i){
	///
	return 1;
}

//função coesa e não acomplada
int multiplicar(int n1, int n2){
	return n1 * n2;
}


int main(){  
	menu(); 
	A = 10;
	B = 20;
	int R = somar(A,B);
	int r2 = multiplicar(A,B);
	printf("Resultado da soma: %d",R);   
	float valorParcela = R / 6;



	return 0;
}

