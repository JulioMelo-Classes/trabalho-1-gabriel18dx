#ifndef Aposta_hpp
#define Aposta_hpp

class Aposta{
    private:
        float credits;
        int rounds;
        int* nums;
        bool validade;

    public:
        Aposta(int argc, char *argv[]);
        void play();
};


#endif