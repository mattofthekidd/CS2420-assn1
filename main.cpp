#include <iostream>
#include <vector>
#include <fstream>
#include <string>

int main() {
    std::ifstream fin;
    fin.open ("Data/Dictionary.txt");
    std::vector <std::string> aList;
    std::string temp = "";

    if(fin) {
        int i = 0;
        while(!fin.eof()) {
            fin >> temp;
            aList.push_back(temp);
            i++;
        }
        std::cout << "\nFirst Word: " << aList.at(0)  << "\nLast Word: " << aList.at(aList.size()-1);
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