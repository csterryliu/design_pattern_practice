#include "./hiring_manager.h"

int main() {
    // Call a manager for interviewing developers
    HiringManager* developerManager = new DevelopmentManager();
    developerManager->takeInterview();
    cout << "-------------------------------------------\n";
    // Call a manager for interviewing marketing
    HiringManager* mkManager = new MarketingManager();
    mkManager->takeInterview();
    cout << "-------------- Done Questioning --------------\n";
    delete developerManager;
    delete mkManager;
    return 0;
}