#pragma once
#include <iostream>
#include "Node.h"
using namespace std;
class Stack
{
public:
    Node* top;
    
    bool isEmpty() {
        if (top == NULL)
            return true;
        else
            return false;
    }
    
    bool push(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        if (isEmpty()) {
            top=newNode;
            newNode->next = NULL;
            return true;
        }
    newNode->next = top;
        top = newNode;

        return true;
        }
        
    bool Pop() {
        if (isEmpty()) {
            return false;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
        return true;
    }

    int peek() {
        if (isEmpty()) {
            return -1;
        }
        return top->data;
    }
};

