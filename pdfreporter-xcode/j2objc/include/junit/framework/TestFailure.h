//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/junit/build_result/java/junit/framework/TestFailure.java
//

#ifndef _JunitFrameworkTestFailure_H_
#define _JunitFrameworkTestFailure_H_

@class JavaLangThrowable;
@protocol JunitFrameworkTest;

#include "J2ObjC_header.h"

@interface JunitFrameworkTestFailure : NSObject {
 @public
  id<JunitFrameworkTest> fFailedTest_;
  JavaLangThrowable *fThrownException_;
}

- (instancetype)initWithJunitFrameworkTest:(id<JunitFrameworkTest>)failedTest
                     withJavaLangThrowable:(JavaLangThrowable *)thrownException;

- (id<JunitFrameworkTest>)failedTest;

- (JavaLangThrowable *)thrownException;

- (NSString *)description;

- (NSString *)trace;

- (NSString *)exceptionMessage;

- (jboolean)isFailure;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitFrameworkTestFailure)

J2OBJC_FIELD_SETTER(JunitFrameworkTestFailure, fFailedTest_, id<JunitFrameworkTest>)
J2OBJC_FIELD_SETTER(JunitFrameworkTestFailure, fThrownException_, JavaLangThrowable *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JunitFrameworkTestFailure)

#endif // _JunitFrameworkTestFailure_H_