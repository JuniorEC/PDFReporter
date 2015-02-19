//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/UUID.java
//

#ifndef _JavaUtilUUID_H_
#define _JavaUtilUUID_H_

@class IOSByteArray;
@class JavaIoObjectInputStream;
@class JavaSecuritySecureRandom;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/lang/Comparable.h"

#define JavaUtilUUID_serialVersionUID -4856846361193249489LL

@interface JavaUtilUUID : NSObject < JavaIoSerializable, JavaLangComparable > {
}

- (instancetype)initWithLong:(jlong)mostSigBits
                    withLong:(jlong)leastSigBits;

+ (JavaUtilUUID *)randomUUID;

+ (JavaUtilUUID *)nameUUIDFromBytesWithByteArray:(IOSByteArray *)name;

+ (JavaUtilUUID *)fromStringWithNSString:(NSString *)uuid;

- (jlong)getLeastSignificantBits;

- (jlong)getMostSignificantBits;

- (jint)version__;

- (jint)variant;

- (jlong)timestamp;

- (jint)clockSequence;

- (jlong)node;

- (jint)compareToWithId:(JavaUtilUUID *)uuid;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilUUID)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT JavaUtilUUID *JavaUtilUUID_randomUUID();

FOUNDATION_EXPORT JavaUtilUUID *JavaUtilUUID_nameUUIDFromBytesWithByteArray_(IOSByteArray *name);

FOUNDATION_EXPORT JavaUtilUUID *JavaUtilUUID_fromStringWithNSString_(NSString *uuid);

J2OBJC_STATIC_FIELD_GETTER(JavaUtilUUID, serialVersionUID, jlong)

FOUNDATION_EXPORT JavaSecuritySecureRandom *JavaUtilUUID_rng_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilUUID, rng_, JavaSecuritySecureRandom *)
J2OBJC_STATIC_FIELD_SETTER(JavaUtilUUID, rng_, JavaSecuritySecureRandom *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilUUID)

#endif // _JavaUtilUUID_H_