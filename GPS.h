#ifndef GPS_H
#define GPS_H

#define ARDUINO 100
#include <TinyGPS.h>

class GPS : public TinyGPS {
public:
  GPS():TinyGPS() {}
  bool setStream(Stream *s) {
    stream = s;
    return true;
  }
  bool process();
private:
  Stream *stream;
};

#endif


