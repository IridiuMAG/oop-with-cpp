#include <iostream>
using namespace std;

class Thermostat
{
public:
  Thermostat(float t, unsigned int m, const string &l)
  {
    temperature = t;
    mode = m;
    location = l;
  }
  
  ~Thermostat()
  {
    cout << "Thermostat in " << location << " is being destroyed." << endl;
  }

  void displayStatus()
  {
    cout << "Location: " << location << " Room Temperature: " << temperature << "°C Mode: " << (mode == 0 ? "OFF" : (mode == 1 ? "COOLING" : "HEATING")) << endl;
  }
private:
  float temperature;
  unsigned int mode;
  string location;
};


int main()
{
  Thermostat livingRoomThermostat(22.5, 1, "Living Room");

  livingRoomThermostat.displayStatus();
  return 0;
}