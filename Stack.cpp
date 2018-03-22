/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Stack.cpp
 * Author: admin
 * 
 * Created on March 21, 2018, 2:53 PM
 */

#include "Stack.h"
#include "Element.h"

Stack::Stack() {
}

Stack::Stack(const Stack& orig) {
}

Stack::~Stack() {
    while (head){
        Element* next = head->getNext();
        delete head;
        head = next;
    }
}

void Stack::push(Element* newElement){
    Element* element = new Element(newElement->getValue(), newElement->getNext());
    head = element;
}

int *Stack::pop(){
    Element* popElement = head;
    int* data;
    
    if (head == nullptr)
        return nullptr;
    
    data = head->getValue();
    head = head->getNext();
    delete popElement;
    return data;
}
