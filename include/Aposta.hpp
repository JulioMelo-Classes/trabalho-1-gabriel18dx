#ifndef Aposta_hpp
#define Aposta_hpp

#include <vector>

class Aposta{
    private:
        float credits;
        int rounds;
        std::vector<int> nums;
        bool validade;

    public:
        Aposta(int argc, char *argv[]);
        void play();
};


#endif