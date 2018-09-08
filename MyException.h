/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MyException.h
 * Author: Eagleye
 *
 * Created on September 6, 2018, 11:34 PM
 */

#ifndef MYEXCEPTION_H
#define MYEXCEPTION_H

#include <exception> // Bu ikisi Exception inheritance için önemli

using namespace std; // Bu ikisi exception inheritance için önemli.

class MyException : public exception {
    public:
    MyException();
    const char * what() const throw ();
};

#endif /* MYEXCEPTION_H */

