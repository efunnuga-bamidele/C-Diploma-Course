#include<simplecpp>

main_program{
//Write your code here
    turtleSim();

    repeat(4){
        repeat(3){
            forward(10); penUp(); wait(0.5);
            forward(10); penDown(); wait(0.5);
        }
        right(90); wait(0.5);
    }
}
