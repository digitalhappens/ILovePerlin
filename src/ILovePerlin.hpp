#include "rack.hpp"

#include <time.h>
#include <iostream>


#ifdef ARCH_MAC
#include <mach/clock.h>
#include <mach/mach.h>
#include <mach/mach_time.h>
#include <mach/clock_types.h>
#endif


#ifdef ARCH_LIN
#include <string.h>
#endif



using namespace rack;

// Forward-declare the Plugin, defined in Template.cpp
extern Plugin *pluginInstance;



//namespace ILovePerlin{
/*
#ifdef TARGET_OSX
   static clock_serv_t cs;
#endif
    static void init();
    float getTimef();
    static void getMonotonicTime(uint64_t & seconds, uint64_t & nanos);
*/
//};


// Forward-declare each Model, defined in each module source file
extern Model *modelPerlinOne;
