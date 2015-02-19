//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/HugeEnumSet.java
//

#ifndef _JavaUtilHugeEnumSet_H_
#define _JavaUtilHugeEnumSet_H_

@class IOSClass;
@class IOSLongArray;
@class IOSObjectArray;
@class JavaLangEnum;
@protocol JavaUtilCollection;

#include "J2ObjC_header.h"
#include "java/util/EnumSet.h"
#include "java/util/Iterator.h"

#define JavaUtilHugeEnumSet_BIT_IN_LONG 64

@interface JavaUtilHugeEnumSet : JavaUtilEnumSet {
}

- (instancetype)initWithIOSClass:(IOSClass *)elementType
           withJavaLangEnumArray:(IOSObjectArray *)enums;

- (jboolean)addWithId:(JavaLangEnum *)element;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jint)size;

- (void)clear;

- (void)complement;

- (jboolean)containsWithId:(id)object;

- (JavaUtilHugeEnumSet *)clone;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)isEqual:(id)object;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)object;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (void)setRangeWithJavaLangEnum:(JavaLangEnum *)start
                withJavaLangEnum:(JavaLangEnum *)end;


@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilHugeEnumSet)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaUtilHugeEnumSet, BIT_IN_LONG, jint)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilHugeEnumSet)

@interface JavaUtilHugeEnumSet_HugeEnumSetIterator : NSObject < JavaUtilIterator > {
}

- (void)computeNextElement;

- (jboolean)hasNext;

- (id)next;

- (void)remove;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilHugeEnumSet_HugeEnumSetIterator)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilHugeEnumSet_HugeEnumSetIterator)

#endif // _JavaUtilHugeEnumSet_H_