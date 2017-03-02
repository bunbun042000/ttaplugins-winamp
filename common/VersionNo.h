/*
The ttaplugins-winamp project.
Copyright (C) 2005-2016 Yamagata Fumihiro

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef VERSIONNO_H
#define VERSIONNO_H

#define /*
!define /**/ /*\
/**/MAJOR_VERSION 3
#define /*
!define /**/ /*\
/**/MINOR_VERSION 46
#define /*
!define /**/ /*\
/**/EXTENDED_VERSION 0


#ifndef MAKESTR
#define _MAKESTR(s) #s
#define MAKESTR(s) _MAKESTR(s)
#endif

#ifdef _DEBUG
#define BASE_VERSION "v" MAKESTR(MAJOR_VERSION) "." MAKESTR(MINOR_VERSION) "debug"
#else
#define BASE_VERSION "v" MAKESTR(MAJOR_VERSION) "." MAKESTR(MINOR_VERSION)
#endif

#define COPYRIGHT_YEARS "2005-2017"
#define VERSION BASE_VERSION

#define FILEVER    MAJOR_VERSION,MINOR_VERSION,EXTENDED_VERSION,0
#define PRODUCTVER MAJOR_VERSION,MINOR_VERSION,EXTENDED_VERSION,0
#define STRFILEVER    VERSION "\0"
#define STRPRODUCTVER STRFILEVER
#define COPYRIGHT_IN_TTA     BASE_VERSION ", (C)2005 Alexander Djourik. All rights reserved.  (C)" COPYRIGHT_YEARS " Yamagta Fumihiro. All right reserved."
#define COPYRIGHT_ENC_TTA    BASE_VERSION " (C)" COPYRIGHT_YEARS " Yamagata Fumihiro. All right reserved."
#define PLUGIN_VERSION VERSION
#define LIBTTA_VERSION "libtta C++ Ver.2.3"

#define PROJECT_URL "<https://github.com/bunbun042000/ttaplugin-winamp>"
#define ORIGINAL_CREADIT01 L"Plugin is written by Alexander Djourik, Pavel Zhilin and Anton Gorbunov.\n"
#define ORIGINAL_CREADIT02 "Copyright (c) 2003 Alexander Djourik.\n"
#define ORIGINAL_CREADIT03 "All rights reserved.\n"
#define LIBTTA_ORIGINAL_CREADIT LIBTTA_VERSION "Copyright(c) 1999 - 2015 Aleksander Djuric.All rights reserved.\n"
#define CREADIT01 "Modified by Yamagata Fumihiro, " COPYRIGHT_YEARS "\n"
#define CREADIT02 "Copyright (C)" COPYRIGHT_YEARS " Yamagata Fumihiro.\n"

#endif  /* VERSIONNO_H */
