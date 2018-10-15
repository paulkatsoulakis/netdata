// SPDX-License-Identifier: GPL-3.0-or-later

#ifndef NETDATA_WEB_SERVER_MULTI_THREADED_H
#define NETDATA_WEB_SERVER_MULTI_THREADED_H

#include "web/server/web_server.h"

extern void *socket_listen_main_multi_threaded(void *ptr);

#endif //NETDATA_WEB_SERVER_MULTI_THREADED_H
