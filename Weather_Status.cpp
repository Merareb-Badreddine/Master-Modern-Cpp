#include <iostream>

// نستخدم هذا السطر حتى لا نضطر لكتابة std:: قبل كل cout, string, endl ...
using namespace std;

enum Weather {
    SUNNY,
    RAINY,
    CLOUDY,
    SNOWY
};

struct City {
    string name;
    int temperature;
    Weather weather;
};

string getWeatherName(Weather w) {
    switch (w) {
        case SUNNY:  return "Sunny";
        case RAINY:  return "Rainy";
        case CLOUDY: return "Cloudy";
        case SNOWY:  return "Snowy";
    }
    return "Unknown";
}

int main() {
    City c1 = {"London", 15, CLOUDY};

    cout << "City: " << c1.name << endl;       // لا نكتب std::cout بسبب using namespace std
    cout << "Temperature: " << c1.temperature << " C" << endl;
    cout << "Weather: " << getWeatherName(c1.weather) << endl;

    return 0;
}
