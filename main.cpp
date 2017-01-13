#include <iostream>
#include <vector>
#include <fstream>
#include <string>

int main() {
    std::ifstream fin;
    fin.open ("../Data/Dictionary.txt");
    std::vector <std::string> aList(fin);
    while(fin) {
        
    }
    return 0;
}

class Node {
    public: 
        Node() {
            m_word;
            prev = nullptr;
            next = nullptr;
        }
        void head() {
            
        }
        void tail() {
            
        }
    private:
        std::string m_word;
        Node* prev;
        Node* next;
        
};

class DoublyLinkedList {
    public:
        
    private:
        
};