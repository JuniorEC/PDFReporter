//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/CookieHandler.java
//

#ifndef _JavaNetCookieHandler_H_
#define _JavaNetCookieHandler_H_

@class JavaNetURI;
@protocol JavaUtilMap;

#include "J2ObjC_header.h"

@interface JavaNetCookieHandler : NSObject {
}

+ (JavaNetCookieHandler *)getDefault;

+ (void)setDefaultWithJavaNetCookieHandler:(JavaNetCookieHandler *)cHandler;

- (id<JavaUtilMap>)getWithJavaNetURI:(JavaNetURI *)uri
                     withJavaUtilMap:(id<JavaUtilMap>)requestHeaders;

- (void)putWithJavaNetURI:(JavaNetURI *)uri
          withJavaUtilMap:(id<JavaUtilMap>)responseHeaders;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetCookieHandler)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT JavaNetCookieHandler *JavaNetCookieHandler_getDefault();

FOUNDATION_EXPORT void JavaNetCookieHandler_setDefaultWithJavaNetCookieHandler_(JavaNetCookieHandler *cHandler);

FOUNDATION_EXPORT JavaNetCookieHandler *JavaNetCookieHandler_systemWideCookieHandler_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetCookieHandler, systemWideCookieHandler_, JavaNetCookieHandler *)
J2OBJC_STATIC_FIELD_SETTER(JavaNetCookieHandler, systemWideCookieHandler_, JavaNetCookieHandler *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNetCookieHandler)

#endif // _JavaNetCookieHandler_H_
