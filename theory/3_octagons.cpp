#include <simplecpp>

main_program{
    initCanvas();
    Turtle t1, t2, t3;
    t2.left(120);
    t3.left(240);
    repeat(8){
        t1.forward(100); t2.forward(100); t3.forward(100);
        t1.left(360/8); t2.left(360/8); t3.left(360/8);
    }
    wait(5);
}
