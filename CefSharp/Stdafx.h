#pragma once

#ifdef EXPORT
  #define DECL __declspec(dllexport)
#else
  #define DECL __declspec(dllimport)
#endif


//#include <vcclr.h>
#include <msclr/all.h>

#include "vcclr_local.h"
#include "include/cef_base.h"
#include "MCefRefPtr.h"
#include "StringUtil.h"
#include "TypeUtil.h"
#include "AppDomainSafe.h"
