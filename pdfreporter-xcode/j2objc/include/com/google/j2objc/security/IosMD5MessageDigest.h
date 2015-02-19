//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/com/google/j2objc/security/IosMD5MessageDigest.java
//

#ifndef _ComGoogleJ2objcSecurityIosMD5MessageDigest_H_
#define _ComGoogleJ2objcSecurityIosMD5MessageDigest_H_

@class IOSByteArray;
@class JavaIoByteArrayOutputStream;

#include "J2ObjC_header.h"
#include "java/security/MessageDigest.h"

@interface ComGoogleJ2objcSecurityIosMD5MessageDigest : JavaSecurityMessageDigest < NSCopying > {
}

- (instancetype)init;

- (void)engineUpdateWithByte:(jbyte)input;

- (void)engineUpdateWithByteArray:(IOSByteArray *)input
                          withInt:(jint)offset
                          withInt:(jint)len;

- (IOSByteArray *)engineDigest;

- (void)engineReset;

- (jint)engineGetDigestLength;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcSecurityIosMD5MessageDigest)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcSecurityIosMD5MessageDigest)

#endif // _ComGoogleJ2objcSecurityIosMD5MessageDigest_H_