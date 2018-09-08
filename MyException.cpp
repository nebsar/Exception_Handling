/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MyException.cpp
 * Author: Eagleye
 * 
 * Created on September 6, 2018, 11:34 PM
 */

#include "MyException.h"

MyException::MyException() {
}

const char* MyException::what() const throw () { // buradan constant string'in char* ile return yapıdığı anlaşılıyor.
    return "C++ Exception";

}


