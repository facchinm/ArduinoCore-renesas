/*
   This file is part of the WiFiS3 library.
   Copyright (c) 2023 Arduino SA. All rights reserved.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with this library; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef WIFISSLCLIENT_H
#define WIFISSLCLIENT_H

#include "WiFiCommands.h"
#include "WiFiClient.h"
#include "Modem.h"
#include "WiFiFileSystem.h"


class WiFiSSLClient : public WiFiClient {

public:
   WiFiSSLClient();

   virtual int connect(IPAddress ip, uint16_t port);
   virtual int connect(const char* host, uint16_t port);
   void setCACert(const char* root_ca);
   void setInsecure();

};

#endif /* WIFISSLCLIENT_H */
