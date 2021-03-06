//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/transform/Transformer.java
//

#ifndef _JavaxXmlTransformTransformer_H_
#define _JavaxXmlTransformTransformer_H_

@class JavaUtilProperties;
@protocol JavaxXmlTransformErrorListener;
@protocol JavaxXmlTransformResult;
@protocol JavaxXmlTransformSource;
@protocol JavaxXmlTransformURIResolver;

#include "J2ObjC_header.h"

@interface JavaxXmlTransformTransformer : NSObject {
}

- (instancetype)init;

- (void)reset;

- (void)transformWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)xmlSource
                 withJavaxXmlTransformResult:(id<JavaxXmlTransformResult>)outputTarget;

- (void)setParameterWithNSString:(NSString *)name
                          withId:(id)value;

- (id)getParameterWithNSString:(NSString *)name;

- (void)clearParameters;

- (void)setURIResolverWithJavaxXmlTransformURIResolver:(id<JavaxXmlTransformURIResolver>)resolver;

- (id<JavaxXmlTransformURIResolver>)getURIResolver;

- (void)setOutputPropertiesWithJavaUtilProperties:(JavaUtilProperties *)oformat;

- (JavaUtilProperties *)getOutputProperties;

- (void)setOutputPropertyWithNSString:(NSString *)name
                         withNSString:(NSString *)value;

- (NSString *)getOutputPropertyWithNSString:(NSString *)name;

- (void)setErrorListenerWithJavaxXmlTransformErrorListener:(id<JavaxXmlTransformErrorListener>)listener;

- (id<JavaxXmlTransformErrorListener>)getErrorListener;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformTransformer)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformTransformer)

#endif // _JavaxXmlTransformTransformer_H_
