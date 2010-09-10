/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_FilterIterator_h__
#define __GENERATED_cls_FilterIterator_h__

#include <cls/OuterIterator.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/iterator.php line 888 */
class c_FilterIterator : public ExtObjectData {
  public:

  // Properties

  // Class Map
  BEGIN_CLASS_MAP(FilterIterator)
    PARENT_CLASS(Iterator)
    PARENT_CLASS(OuterIterator)
    PARENT_CLASS(Traversable)
  END_CLASS_MAP(FilterIterator)
  DECLARE_CLASS_COMMON(FilterIterator, FilterIterator)
  DECLARE_INVOKE_EX(FilterIterator, FilterIterator, ObjectData)

  // DECLARE_STATIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_FilterIterator 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_FilterIterator 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_FilterIterator 1
  #define OMIT_JUMP_TABLE_CLASS_CONSTANT_FilterIterator 1

  // DECLARE_INSTANCE_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_GETARRAY_FilterIterator 1
  #define OMIT_JUMP_TABLE_CLASS_SETARRAY_FilterIterator 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_FilterIterator 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_FilterIterator 1

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC_FilterIterator 1

  // DECLARE_COMMON_INVOKE
  #define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_FilterIterator 1
  #define OMIT_JUMP_TABLE_CLASS_INVOKE_FilterIterator 1

  public:
  DECLARE_INVOKES_FROM_EVAL
  void init();
};
extern struct ObjectStaticCallbacks cw_FilterIterator;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_FilterIterator_h__