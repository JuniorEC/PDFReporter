//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/base/Strings.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonBaseStrings_RESTRICT
#define ComGoogleCommonBaseStrings_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonBaseStrings_RESTRICT
#if !defined (_ComGoogleCommonBaseStrings_) && (ComGoogleCommonBaseStrings_INCLUDE_ALL || ComGoogleCommonBaseStrings_INCLUDE)
#define _ComGoogleCommonBaseStrings_

@protocol JavaLangCharSequence;


@interface ComGoogleCommonBaseStrings : NSObject {
}

+ (NSString *)nullToEmptyWithNSString:(NSString *)string;

+ (NSString *)emptyToNullWithNSString:(NSString *)string;

+ (jboolean)isNullOrEmptyWithNSString:(NSString *)string;

+ (NSString *)padStartWithNSString:(NSString *)string
                           withInt:(jint)minLength
                          withChar:(jchar)padChar;

+ (NSString *)padEndWithNSString:(NSString *)string
                         withInt:(jint)minLength
                        withChar:(jchar)padChar;

+ (NSString *)repeatWithNSString:(NSString *)string
                         withInt:(jint)count;

+ (NSString *)commonPrefixWithJavaLangCharSequence:(id<JavaLangCharSequence>)a
                          withJavaLangCharSequence:(id<JavaLangCharSequence>)b;

+ (NSString *)commonSuffixWithJavaLangCharSequence:(id<JavaLangCharSequence>)a
                          withJavaLangCharSequence:(id<JavaLangCharSequence>)b;

+ (jboolean)validSurrogatePairAtWithJavaLangCharSequence:(id<JavaLangCharSequence>)string
                                                 withInt:(jint)index;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseStrings)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT NSString *ComGoogleCommonBaseStrings_nullToEmptyWithNSString_(NSString *string);

FOUNDATION_EXPORT NSString *ComGoogleCommonBaseStrings_emptyToNullWithNSString_(NSString *string);

FOUNDATION_EXPORT jboolean ComGoogleCommonBaseStrings_isNullOrEmptyWithNSString_(NSString *string);

FOUNDATION_EXPORT NSString *ComGoogleCommonBaseStrings_padStartWithNSString_withInt_withChar_(NSString *string, jint minLength, jchar padChar);

FOUNDATION_EXPORT NSString *ComGoogleCommonBaseStrings_padEndWithNSString_withInt_withChar_(NSString *string, jint minLength, jchar padChar);

FOUNDATION_EXPORT NSString *ComGoogleCommonBaseStrings_repeatWithNSString_withInt_(NSString *string, jint count);

FOUNDATION_EXPORT NSString *ComGoogleCommonBaseStrings_commonPrefixWithJavaLangCharSequence_withJavaLangCharSequence_(id<JavaLangCharSequence> a, id<JavaLangCharSequence> b);

FOUNDATION_EXPORT NSString *ComGoogleCommonBaseStrings_commonSuffixWithJavaLangCharSequence_withJavaLangCharSequence_(id<JavaLangCharSequence> a, id<JavaLangCharSequence> b);

FOUNDATION_EXPORT jboolean ComGoogleCommonBaseStrings_validSurrogatePairAtWithJavaLangCharSequence_withInt_(id<JavaLangCharSequence> string, jint index);
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseStrings)