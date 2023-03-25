// don't try this in C#
// by1 is a much more realistic practicable and non trivial example of an array
// 99.99% of the time the requirement is to track, manipulate, gather and report on a collection of things
#include <iostream>

int x;

struct xtimeframe
{
    int xtime;           // some unit of something
    char xframe;         // a value of that something
};

xtimeframe x_array[5];   // now we have 5 of them -  not too exciting but just wait

int main()
{
    std::cout << "greetings from by1" << std::endl;
// here is where the fireworks really begin
// assign initial values to first array index - use your imagination - there might be dozens of things to keep track of
    x_array[0].xtime = 0;
    x_array[0].xframe = '0';
//  magic
    for (x = 1; x < 5; x++)
    {
        x_array[x] = x_array[0];      // we are now assigning the other values to the first one
    }                                 // so given that in Cby1 this would be 5x2 assignments
                                      // - this is only 6
                                      // the first 2 followed by the loop 4
                                      // I know it does not sound like much - but imagine 500
                                      // that would be 501 (2 + 499 ) assignments instead of 1000

    std::cout << "Before " << std::endl;

    for (x = 0; x < 5; x++)
    {
        std::cout << " t " << x_array[x].xtime << " f " << x_array[x].xframe << std::endl;
    }

    // lets prove that this really works

    x_array[0].xtime = 1;

    x_array[0].xframe = '1';

    std::cout << "After " << std::endl;

    for (x = 0; x < 5; x++)
    {
        std::cout << " t " << x_array[x].xtime << " f " << x_array[x].xframe << std::endl;
    }

    std::cin >> x;

    return 0;
}
