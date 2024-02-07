#pragma once

#ifndef ARDUINO_PORTENTA_C33
// force discovering wth shield library
// this doesn't work ATM
// a check and a bailout should be added to all the other files too
#include "utility/w5100.h"
#endif

#include <inttypes.h>
#include "IPAddress.h"

#include "EthernetClient.h"
#include "EthernetServer.h"

#include "CNetIf.h"

#ifdef ARDUINO_PORTENTA_C33

// FIXME Instantiate a global variable from CEth, calling it Ethernet
extern CEth Ethernet;

#endif // ARDUINO_PORTENTA_C33
