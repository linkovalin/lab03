//
// Created by u211-08 on 20.04.2017.
//

#ifndef UNTITLED_TEMPERATURE_H
#define UNTITLED_TEMPERATURE_H
#include <sstream>
Temperature convert(const tempr&from,char to);
struct Temperature{
    double temp;
    char scale;
};
std: istream &operator>>(istream& stream,Temperature& temp);
char scale[]="KFC";
#endif //UNTITLED_TEMPERATURE_H


