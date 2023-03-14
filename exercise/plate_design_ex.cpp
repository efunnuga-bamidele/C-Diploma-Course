#include<simplecpp>


main_program{
    turtleSim();
    //right(90);
       repeat(100){
        repeat(4){
            forward(5);
            left(220/4);
        }
        forward(50);

        repeat(4){
            forward(5);
            left(220/4);
        }
        forward(50);

        repeat(4){
            forward(5);
            left(220/4);
        }


        left(360/10);
       }
    wait(10);
}
