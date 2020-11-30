#include "list.hpp"
#include "list.cpp"
#include "queue.hpp"
#include "queue.cpp"
#include "stack.hpp"
#include "stack.cpp"
#include <fstream>
#include <string>
#include <sstream>

int main(int argc, char const *argv[])
{
    List<int>* lista = new List<int>();
    Queue<int>* fila = new Queue<int>();
    Stack<int>* pilha = new Stack<int>();

    std::string linha;
    std::ifstream arquivo (argv[1]);

    if (arquivo.is_open())
    {
        while (!arquivo.eof())
        {
            std::string tipoDeLista;
            std::string metodo;
            int valor;
            int posicao;
            
            std::getline(arquivo, linha); 
            
            std::stringstream ss;
            ss << linha;
            ss >> tipoDeLista >> metodo >> valor >> posicao;

            if (tipoDeLista == "list"){
                if (metodo == "size"){
                    std::cout << "Tamanho da lista: " << lista->size() << std::endl;
                } else if (metodo == "insertAt") {
                    std::cout << "Inserindo elemento na posição " << valor << " da lista: " << posicao << std::endl;
                
                    lista->insertAt(valor, posicao);
                } else if (metodo == "removeAt") {
                    std::cout << "Removendo elemento na posição " << valor << " da lista " << std::endl;
                
                    lista->removeAt(valor);
                } else if (metodo == "insertAtFront") {
                    std::cout << "Inserindo elemento na posição um da lista: " << valor << std::endl;
                
                    lista->insertAtFront(valor);
                } else if (metodo == "insertAtBack") {
                    std::cout << "Inserindo elemento na última posição da lista: " << valor << std::endl;
                
                    lista->insertAtBack(valor);
                } else if (metodo == "removeAtFront") {
                    std::cout << "Removendo elemento na primeira posição da lista " << std::endl;
                
                    lista->removeAtFront();
                } else if (metodo == "removeAtFront") {
                    std::cout << "Removendo elemento na última posição da lista " << std::endl;
                
                    lista->removeAtBack();
                } else if (metodo == "print") {
                    std::cout << "Imprimindo lista: " << std::endl;
                
                    lista->print();
                }
            }
            else if (tipoDeLista == "queue") {
                if (metodo == "size"){
                    std::cout << "Tamanho da fila: " << fila->size() << std::endl;
                } else if (metodo == "pushBack"){
                    std::cout << "Inserindo elemento no final da lista: " << valor << std::endl;

                    fila->pushBack(valor);
                } else if (metodo == "popFront"){
                    std::cout << "Removendo o primeiro elemento da fila" << std::endl;

                    fila->popFront();
                } else if (metodo == "front"){
                    std::cout << "Primeiro Elemento da fila: " << fila->front() << std::endl;
                } else if (metodo == "back"){
                    std::cout << "Último Elemento da fila: " << fila->back() << std::endl;
                }
            }
            else if (tipoDeLista == "stack") {
                if (metodo == "size"){
                    std::cout << "Tamanho da pilha: " << pilha->size() << std::endl;
                } else if (metodo == "push") {
                    std::cout << "Inserindo elemento no topo pilha: " << valor << std::endl;

                    pilha->push(valor);
                } else if (metodo == "top") {
                    std::cout << "Elemento do topo da pilha: " << pilha->top() << std::endl;
                } else if (metodo == "pop") {
                    std::cout << "Removendo elemento do topo da pilha " << std::endl;
                }
            }
        }

        arquivo.close();
    }; 

    return 0;
}

// Referências
// Abertura e leitura de Arquivos (https://www.hardware.com.br/comunidade/ler-arquivos/1061210/)
// std::stringstream (http://www.cplusplus.com/reference/sstream/stringstream/stringstream/)
