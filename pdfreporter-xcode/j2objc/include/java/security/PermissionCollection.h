//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/PermissionCollection.java
//

#ifndef _JavaSecurityPermissionCollection_H_
#define _JavaSecurityPermissionCollection_H_

@class JavaSecurityPermission;
@protocol JavaUtilEnumeration;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@interface JavaSecurityPermissionCollection : NSObject < JavaIoSerializable > {
}

- (void)addWithJavaSecurityPermission:(JavaSecurityPermission *)permission;

- (id<JavaUtilEnumeration>)elements;

- (jboolean)impliesWithJavaSecurityPermission:(JavaSecurityPermission *)permission;

- (jboolean)isReadOnly;

- (void)setReadOnly;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityPermissionCollection)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityPermissionCollection)

#endif // _JavaSecurityPermissionCollection_H_