#include "lib_7k/util/misc.h"

class Odometry {
  public:
    static void start(void* ignore);
    void run();
    void stop();

  private:
    static bool isRunning;
};