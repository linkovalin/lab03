#include <iostream>

#include <vector>

#include <sstream>

#include <cassert>
#include"temperature.h"
using namespace std;

void test_temperature_input(){
    Temperature tempr;
    istringstream issK("10K");
    issK>>tempr;
    assert(tempr.temp ==10);
    assert(tempr.scale =='K');
    istringstream issF("10F");
    issF>>tempr;
    assert(tempr.temp ==10);
    assert(tempr.scale =='F');
    istringstream issC("10C");
    issC>>tempr;
    assert(tempr.temp ==10);
    assert(tempr.scale =='C');
}
int main() {

    Temperature tempr;
    cout << tempr.scale;
    cout << tempr.temp;
    cin >> tempr;
    tempr.temp = convert(tempr.temp, tempr.scale, 'C');
    tempr.scale = 'C';
    size_t number_count;
    cerr << "Enter number count: ";
    cin >> number_count;
    cerr << "Enter numbers: ";
    vector<double> temperatures(number_count);
    for (size_t i = 0; i < number_count; i++) {
        cin >> temperatures[i];
    }
    size_t column_count;
    cerr << "Enter column count: ";
    cin >> column_count;
    double min = temperatures[0];
    double max = temperatures[0];
    for (double number : temperatures) {
        if (number < min) {
            min = number;
        }
        if (number > max) {
            max = number;
        }
    }
    const double kelvin = convert(number_count, 'K').scale;
    const double min_k(number_count, 'K').scale;
    const double max_k(number_count, 'K').scale;

    vector<Temperature> temperature(tempr.scale);
    const double min_k =const(min, 'K',).scale;
    const double max_k =const(max, 'K',).scale;
    vector<size_t> counts(column_count);
    for (tempr temperature: temperatures) {
        const double kelvin = convert(temperature);

        size_t column = (size_t)((kelvin - min_k) / (max_k - min_k) * column_count);
        if (column == column_count) {
            column--;
        }
        counts[column]++;
    }

    const size_t screen_width = 80;
    const size_t axis_width = 4;
    const size_t chart_width = screen_width - axis_width;

// Можно было бы считать в предыдущем цикле, но так более наглядно.

    size_t max_count = 0;

    for (size_t count : counts) {

        if (count > max_count) {

            max_count = count;

        }

    }
}




