#include"temperature.h";
Temperature convert(const tempr&from,char to) {
    double K, converted;
    switch (from.scale) {
    case 'K':
        K = from.temp;
    case 'F':
        K = from.scale * 5 / 9;
    case 'C':
        K = (from.temp - 32) * 5 / 9 + 273;
    }
    switch (to) {
    case 'K':
        converted = K;
        break;
    case 'F':
        converted = K * 5 / 9;
    case 'C':
        converted = K - 273.15;
    }
    Temperature temp;
    temp.scale = to;
    temp.temp = converted;
    return temp;
}
    std: istream &operator>>(istream& stream,Temperature& temp)
    {
        cout<<"Enter temperature: ";
        stream>>temp.temp>>temp.scale;
        return stream;
    }
/
// Created by u211-08 on 20.04.2017.
//

