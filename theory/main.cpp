#include<simplecpp>

main_program{
//Write your code here

    turtleSim();
    //forward(100);   right(90);  wait(0.5);
    //forward(100);   right(90);  wait(0.5);
    //forward(100);   right(90);  wait(0.5);
    //forward(100);
    //wait(5);

    cout << "How many sides? " ;

    int nsides;

    cin >> nsides;

    repeat(nsides){
        forward(100);
        right(360.0 / nsides);
        wait(0.5);
    }

    wait(10);

}
