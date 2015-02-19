//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/cert/CRLException.java
//

#ifndef _JavaSecurityCertCRLException_H_
#define _JavaSecurityCertCRLException_H_

@class JavaLangThrowable;

#include "J2ObjC_header.h"
#include "java/security/GeneralSecurityException.h"

#define JavaSecurityCertCRLException_serialVersionUID -6694728944094197147LL

@interface JavaSecurityCertCRLException : JavaSecurityGeneralSecurityException {
}

- (instancetype)initWithNSString:(NSString *)msg;

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCRLException)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaSecurityCertCRLException, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCRLException)

#endif // _JavaSecurityCertCRLException_H_