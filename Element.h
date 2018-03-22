/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Element.h
 * Author: admin
 *
 * Created on March 21, 2018, 3:02 PM
 */

#ifndef ELEMENT_H
#define ELEMENT_H

class Element {
public:
    Element(int *d, Element *n);
    Element(const Element& orig);
    virtual ~Element();
    
    Element* getNext();
    int* getValue();
private:
    int* data;
    Element *next;
};

#endif /* ELEMENT_H */

