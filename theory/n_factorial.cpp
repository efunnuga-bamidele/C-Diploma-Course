#include<simplecpp>

main_program{
//Write your code here

    int n;
    cout << "Enter a number : ";
    cin >> n;
    double I, T, S;
    I=1;
    T=1;
    S=1;

    for (int x = 1; x <= n; x++)
    //repeat(n)
    {
        T = T / I;
        S = S + T;
        I = I + 1;
    }
    cout << S << endl;
}
