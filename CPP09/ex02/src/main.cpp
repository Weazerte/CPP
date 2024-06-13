#include "../inc/MergeI.hpp"

int main() {

     int number;
    for (int index = 1; index < argc; index++)
    {
        std::stringstream readstring(argv[index]);
        if (!(readstring >> number) || !(readstring.eof()))
            throw "";
        if (number < 0)
            throw ": Negative number !";
        Vec.push_back(number);
        Deq.push_back(number);
    }

    return 0;
}