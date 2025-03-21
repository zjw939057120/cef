// Copyright (c) 2023 The Chromium Embedded Framework Authors. All rights
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
// $hash=9d367936047c38f9b70488ef5caf6d8ca081bb50$
//

#include "libcef_dll/ctocpp/task_runner_ctocpp.h"
#include "libcef_dll/cpptoc/task_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

// STATIC METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
CefRefPtr<CefTaskRunner> CefTaskRunner::GetForCurrentThread() {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_task_runner_t* _retval = cef_task_runner_get_for_current_thread();

  // Return type: refptr_same
  return CefTaskRunnerCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefTaskRunner> CefTaskRunner::GetForThread(CefThreadId threadId) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_task_runner_t* _retval = cef_task_runner_get_for_thread(threadId);

  // Return type: refptr_same
  return CefTaskRunnerCToCpp::Wrap(_retval);
}

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
bool CefTaskRunnerCToCpp::IsSame(CefRefPtr<CefTaskRunner> that) {
  shutdown_checker::AssertNotShutdown();

  cef_task_runner_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_same))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: that; type: refptr_same
  DCHECK(that.get());
  if (!that.get())
    return false;

  // Execute
  int _retval = _struct->is_same(_struct, CefTaskRunnerCToCpp::Unwrap(that));

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") bool CefTaskRunnerCToCpp::BelongsToCurrentThread() {
  shutdown_checker::AssertNotShutdown();

  cef_task_runner_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, belongs_to_current_thread))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->belongs_to_current_thread(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefTaskRunnerCToCpp::BelongsToThread(CefThreadId threadId) {
  shutdown_checker::AssertNotShutdown();

  cef_task_runner_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, belongs_to_thread))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->belongs_to_thread(_struct, threadId);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefTaskRunnerCToCpp::PostTask(CefRefPtr<CefTask> task) {
  shutdown_checker::AssertNotShutdown();

  cef_task_runner_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, post_task))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: task; type: refptr_diff
  DCHECK(task.get());
  if (!task.get())
    return false;

  // Execute
  int _retval = _struct->post_task(_struct, CefTaskCppToC::Wrap(task));

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefTaskRunnerCToCpp::PostDelayedTask(CefRefPtr<CefTask> task,
                                          int64 delay_ms) {
  shutdown_checker::AssertNotShutdown();

  cef_task_runner_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, post_delayed_task))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: task; type: refptr_diff
  DCHECK(task.get());
  if (!task.get())
    return false;

  // Execute
  int _retval =
      _struct->post_delayed_task(_struct, CefTaskCppToC::Wrap(task), delay_ms);

  // Return type: bool
  return _retval ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefTaskRunnerCToCpp::CefTaskRunnerCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefTaskRunnerCToCpp::~CefTaskRunnerCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_task_runner_t*
CefCToCppRefCounted<CefTaskRunnerCToCpp, CefTaskRunner, cef_task_runner_t>::
    UnwrapDerived(CefWrapperType type, CefTaskRunner* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefTaskRunnerCToCpp,
                                   CefTaskRunner,
                                   cef_task_runner_t>::kWrapperType =
    WT_TASK_RUNNER;
