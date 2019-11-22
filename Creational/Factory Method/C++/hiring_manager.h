#include <iostream>
#include "./interviewer.h"
// Factory
class HiringManager {
    public:
        HiringManager() { cout << "HiringManager created\n"; }
        virtual ~HiringManager() { cout << "HiringManager deleted\n"; }
        // factory method
        virtual Interviewer* makeInterviewer() = 0;
        void takeInterview() {
            Interviewer* interviewer = makeInterviewer();
            interviewer->askQuestion();
            delete interviewer;
        }
};

class DevelopmentManager: public HiringManager {
    public:
        DevelopmentManager() { cout << "DevelopmentManager created\n"; }
        ~DevelopmentManager() { cout << "DevelopmentManager deleted\n"; }
        Interviewer* makeInterviewer() {
            return new Developer();
        }
};

class MarketingManager: public HiringManager {
    public:
        MarketingManager() { cout << "MarketingManager created\n"; }
        ~MarketingManager() { cout << "MarketingManager deleted\n"; }
        Interviewer* makeInterviewer() {
            return new CommunityExecutive();
        }
};
