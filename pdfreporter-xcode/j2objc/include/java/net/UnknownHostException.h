//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/UnknownHostException.java
//

#ifndef _JavaNetUnknownHostException_H_
#define _JavaNetUnknownHostException_H_

#include "J2ObjC_header.h"
#include "java/io/IOException.h"

#define JavaNetUnknownHostException_serialVersionUID -4639126076052875403LL

@interface JavaNetUnknownHostException : JavaIoIOException {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetUnknownHostException)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaNetUnknownHostException, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNetUnknownHostException)

#endif // _JavaNetUnknownHostException_H_