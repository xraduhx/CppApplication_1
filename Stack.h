/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Stack.h
 * Author: admin
 *
 * Created on March 21, 2018, 2:53 PM
 */

#ifndef STACK_H
#define STACK_H

#include "Element.h"

class Stack {
public:
    Stack();
    Stack(const Stack& orig);
    virtual ~Stack();
    
    void push(Element* newElement);
    int* pop();

private:
    Element* head;

};
#endif /* STACK_H */

