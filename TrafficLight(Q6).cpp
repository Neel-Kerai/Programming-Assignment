#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

enum TrafficLightState { RED, YELLOW, GREEN };

void displayTrafficLight(TrafficLightState state) {
    if (state == RED) {
        cout << "Red Light" << endl;
    } else if (state == YELLOW) {
        cout << "Yellow Light" << endl;
    } else if (state == GREEN) {
        cout << "Green Light" << endl;
    }
}

int main() {
    TrafficLightState state = RED;
    while (true) {
        displayTrafficLight(state);
        if (state == RED) {
            this_thread::sleep_for(chrono::seconds(7));
            state = GREEN;
        } else if (state == YELLOW) {
            this_thread::sleep_for(chrono::seconds(7));
            state = RED;
        } else if (state == GREEN) {
            this_thread::sleep_for(chrono::seconds(7));
            state = YELLOW;
        }
    }
    return 0;
}