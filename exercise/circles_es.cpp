#include<simplecpp>


main_program{
    turtleSim();

    //Draw seven circles
    repeat(7){
        penDown();
        //Dray 10 pixel line while turning (360 / 20) degrees 20 times.
        repeat(20){
            forward(10);
            right(360 / 20);

        }
        //Raise pen Up and move 90 pixel then turn 51.5 degrees.
        penUp();
        forward(90);
        right(51.5);
        wait(0.5);
    }
}
