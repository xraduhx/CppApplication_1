/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Element.cpp
 * Author: admin
 * 
 * Created on March 21, 2018, 3:02 PM
 */

#include "Element.h"

Element::Element(int *d, Element *n): data(d), next(n) {
}

Element::Element(const Element& orig) {
}

Element::~Element() {
}

Element* Element::getNext(){
    return next;
}

int* Element::getValue(){
    return data;
}

