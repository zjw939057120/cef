// Copyright (c) 2020 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=61e579331179e282cbeba655bf5e346f83b74466$
//

#include "libcef_dll/cpptoc/set_cookie_callback_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK
set_cookie_callback_on_complete(struct _cef_set_cookie_callback_t* self,
                                int success) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefSetCookieCallbackCppToC::Get(self)->OnComplete(success ? true : false);
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefSetCookieCallbackCppToC::CefSetCookieCallbackCppToC() {
  GetStruct()->on_complete = set_cookie_callback_on_complete;
}

// DESTRUCTOR - Do not edit by hand.

CefSetCookieCallbackCppToC::~CefSetCookieCallbackCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefSetCookieCallback> CefCppToCRefCounted<
    CefSetCookieCallbackCppToC,
    CefSetCookieCallback,
    cef_set_cookie_callback_t>::UnwrapDerived(CefWrapperType type,
                                              cef_set_cookie_callback_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

template <>
CefWrapperType CefCppToCRefCounted<CefSetCookieCallbackCppToC,
                                   CefSetCookieCallback,
                                   cef_set_cookie_callback_t>::kWrapperType =
    WT_SET_COOKIE_CALLBACK;
