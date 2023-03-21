#include<simplecpp>

main_program{
//Write your code here
    double centigrade, fahrenheit;
    cout << "Give temperature in Centigrade: ";
    cin >> centigrade;
    fahrenheit = centigrade * 9 / 5 + 32;
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
}
