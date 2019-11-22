#include <iostream>
using namespace std;
// Product
class Interviewer {
    public:
        Interviewer() { cout << "Interviewer created\n"; }
        virtual ~Interviewer() { cout << "Interviewer deleted\n"; }
        virtual void askQuestion() = 0;
};

class Developer: public Interviewer {
    public:
        Developer() { cout << "Developer created\n"; }
        ~Developer() { cout << "Developer deleted\n"; }
        void askQuestion() {
            cout << "======== ask design patterns ========\n";
        }
};

class CommunityExecutive: public Interviewer {
    public:
        CommunityExecutive() { cout << "CommunityExecutive created\n"; }
        ~CommunityExecutive() { cout << "CommunityExecutive deleted\n"; }
        void askQuestion() {
            cout << "======= ask community building ========\n";
        }
};