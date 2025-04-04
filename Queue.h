#pragma once
#include <iostream>
#include "Node.h"
using namespace std;
class Queue
{
    public:
    Node *front;
    Node *rear;
    int c;
    
    Queue(int capacity){
        front = NULL;
        rear = NULL;
        c = capacity;
    }
    
    bool isEmpty(){
    if (front == NULL)
        return true;
    else
        return false;
    }
    
    
    bool isFull(){
        if (!front)
            return false;
        else {
            Node* temp = front;
            int count = 0;
            while (temp != NULL) {
                count++;
                temp = temp->next;
            }
            if (count == c)
                return true;
        }
        return false;
    }
        
    
    bool Enqueue(int data){
        if (isFull()) {
            return false;
        }
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;
        if (!isEmpty()) {
            rear->next = newNode;
            rear = newNode;
            return true;
        }
            front = newNode;
            rear = newNode;
            return true;
        
    }
    
    bool Dequeue(int data){
        if (isEmpty()){
            return false;
        }
        if (front->data == data) {
            Node* temp = front;
            front = front->next;
            delete temp;
            return true;
        }
        if (rear->data == data) {
            Node* temp = front;
            while (temp->next != rear) {
                temp = temp->next;
            }
            delete rear;
            rear = temp;
            rear->next = NULL;
            return true;
        }
        
        
        Node* temp = front;
        while (temp->next != NULL) {
            if (temp->data == data) {
                temp->next = temp->next->next;
                return true;
            }
        }
        return false;
    }
};

