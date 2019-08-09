
class Singleton {
    public:
        // check: virtual keyword on destructor
        virtual ~Singleton();
        static Singleton* getInstance();
        // Singleton *m_singleton;
        void hello();
    private:
        Singleton();
        // check: the static members of C++ classes
        static Singleton* instance;
};