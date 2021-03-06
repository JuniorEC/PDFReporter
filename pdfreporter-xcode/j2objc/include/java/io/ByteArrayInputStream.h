//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/ByteArrayInputStream.java
//

#ifndef _JavaIoByteArrayInputStream_H_
#define _JavaIoByteArrayInputStream_H_

@class IOSByteArray;

#include "J2ObjC_header.h"
#include "java/io/InputStream.h"

@interface JavaIoByteArrayInputStream : JavaIoInputStream {
 @public
  IOSByteArray *buf_;
  jint pos_;
  jint mark__;
  jint count_;
}

- (instancetype)initWithByteArray:(IOSByteArray *)buf;

- (instancetype)initWithByteArray:(IOSByteArray *)buf
                          withInt:(jint)offset
                          withInt:(jint)length;

- (jint)available;

- (void)close;

- (void)markWithInt:(jint)readlimit;

- (jboolean)markSupported;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

- (void)reset;

- (jlong)skipWithLong:(jlong)byteCount;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoByteArrayInputStream)

J2OBJC_FIELD_SETTER(JavaIoByteArrayInputStream, buf_, IOSByteArray *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaIoByteArrayInputStream)

#endif // _JavaIoByteArrayInputStream_H_
