#ifndef SIGNALRSERVER_GLOBAL_H
#define SIGNALRSERVER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(SIGNALRSERVER_LIBRARY)
#  define SIGNALRSERVERSHARED_EXPORT Q_DECL_EXPORT
#else
#  define SIGNALRSERVERSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // SIGNALRSERVER_GLOBAL_H