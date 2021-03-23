#include <iostream>
using namespace std;


    int main()
    {
      
        double x = 0.0, sum = 0, total = 0;
        double grit = 0.0;
        
        if(x>=5)
        cout << "Enter a number between 1-5!" << endl;
        return 0;
       
        total++;
        cout << "New projects and ideas sometimes distract me from previous ones" << endl;
        cout << "Not at all - 5; Not much - 4; Somewhat - 3; Mostly - 2; Very much - 1:" << endl;
        
        
        cin >> x;
        sum += x;
        
        total++;
        cout << "Setbacks don't discourage be, I don't give up easily" << endl;
        cout << "Not at all - 5; Not much - 4; Somewhat - 3; Mostly - 2; Very much - 1:" << endl;
        
        cin >> x;
        sum += x;
        
        total++;
        cout << "I often set a goal but later choose to pursue a different one" << endl;
        cout << "Not at all - 5; Not much - 4; Somewhat - 3; Mostly - 2; Very much - 1:" << endl;
        
        cin >> x;
        sum += x;
        
        total++;
        cout << "I am a hard worker" << endl;
        cout << "Not at all - 5; Not much - 4; Somewhat - 3; Mostly - 2; Very much - 1:" << endl;
        
        cin >> x;
        sum += x;
        
        total++;
        cout << "I have difficulty maintaining my focus on projects that take more than a few months to complete" << endl;
        cout << "Not at all - 5; Not much - 4; Somewhat - 3; Mostly - 2; Very much - 1:" << endl;
        
        cin >> x;
        sum += x;
        
        total++;
        cout << "I finish whatever i begin" << endl;
        cout << "Not at all - 5; Not much - 4; Somewhat - 3; Mostly - 2; Very much - 1:" << endl;
        
        cin >> x;
        sum += x;
        
        total++;
        cout << "My interests change from year to year" << endl;
        cout << "Not at all - 5; Not much - 4; Somewhat - 3; Mostly - 2; Very much - 1:" << endl;
        
        cin >> x;
        sum += x;
        
        total++;
        cout << "I am diligent. I never give up" << endl;
        cout << "Not at all - 5; Not much - 4; Somewhat - 3; Mostly - 2; Very much - 1:" << endl;
        
        cin >> x;
        sum += x;
        
        total++;
        cout << "I have been obsessed with a certain idea or project for a short time but later lost interest" << endl;
        cout << "Not at all - 5; Not much - 4; Somewhat - 3; Mostly - 2; Very much - 1:" << endl;
        
        cin >> x;
        sum += x;
        
        total++;
        cout << "I have overcome setbacks to conquer an important challenge" << endl;
        cout << "Not at all - 5; Not much - 4; Somewhat - 3; Mostly - 2; Very much - 1:" << endl;
        
        cin >> x;
        sum += x;
        
        grit = sum / total;
        cout << "Your grit score is " << grit << endl;
    }
       
       