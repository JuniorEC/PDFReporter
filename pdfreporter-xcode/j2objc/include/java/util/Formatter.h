//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Formatter.java
//

#ifndef _JavaUtilFormatter_H_
#define _JavaUtilFormatter_H_

@class IOSCharArray;
@class IOSObjectArray;
@class JavaIoFile;
@class JavaIoIOException;
@class JavaIoOutputStream;
@class JavaIoPrintStream;
@class JavaLangStringBuilder;
@class JavaUtilCalendar;
@class JavaUtilFormatter_FormatSpecifierParser;
@class JavaUtilFormatter_FormatToken;
@class JavaUtilIllegalFormatConversionException;
@class JavaUtilLocale;
@class JavaUtilUnknownFormatConversionException;
@class LibcoreIcuLocaleData;
@class LibcoreIcuNativeDecimalFormat;
@protocol JavaLangAppendable;
@protocol JavaLangCharSequence;

#include "J2ObjC_header.h"
#include "java/io/Closeable.h"
#include "java/io/Flushable.h"
#include "java/lang/Enum.h"
#include "java/lang/ThreadLocal.h"

@interface JavaUtilFormatter : NSObject < JavaIoCloseable, JavaIoFlushable > {
}

- (instancetype)init;

- (instancetype)initWithJavaLangAppendable:(id<JavaLangAppendable>)a;

- (instancetype)initWithJavaUtilLocale:(JavaUtilLocale *)l;

- (instancetype)initWithJavaLangAppendable:(id<JavaLangAppendable>)a
                        withJavaUtilLocale:(JavaUtilLocale *)l;

- (instancetype)initWithNSString:(NSString *)fileName;

- (instancetype)initWithNSString:(NSString *)fileName
                    withNSString:(NSString *)csn;

- (instancetype)initWithNSString:(NSString *)fileName
                    withNSString:(NSString *)csn
              withJavaUtilLocale:(JavaUtilLocale *)l;

- (instancetype)initWithJavaIoFile:(JavaIoFile *)file;

- (instancetype)initWithJavaIoFile:(JavaIoFile *)file
                      withNSString:(NSString *)csn;

- (instancetype)initWithJavaIoFile:(JavaIoFile *)file
                      withNSString:(NSString *)csn
                withJavaUtilLocale:(JavaUtilLocale *)l;

- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)os;

- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)os
                              withNSString:(NSString *)csn;

- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)os
                              withNSString:(NSString *)csn
                        withJavaUtilLocale:(JavaUtilLocale *)l;

- (instancetype)initWithJavaIoPrintStream:(JavaIoPrintStream *)ps;

- (JavaUtilLocale *)locale;

- (id<JavaLangAppendable>)out;

- (NSString *)description;

- (void)flush;

- (void)close;

- (JavaIoIOException *)ioException;

- (JavaUtilFormatter *)formatWithNSString:(NSString *)format
                        withNSObjectArray:(IOSObjectArray *)args;

- (JavaUtilFormatter *)formatWithJavaUtilLocale:(JavaUtilLocale *)l
                                   withNSString:(NSString *)format
                              withNSObjectArray:(IOSObjectArray *)args;

@end

FOUNDATION_EXPORT BOOL JavaUtilFormatter_initialized;
J2OBJC_STATIC_INIT(JavaUtilFormatter)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT IOSCharArray *JavaUtilFormatter_ZEROS_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilFormatter, ZEROS_, IOSCharArray *)

FOUNDATION_EXPORT JavaLangThreadLocal *JavaUtilFormatter_cachedDecimalFormat_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilFormatter, cachedDecimalFormat_, JavaLangThreadLocal *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFormatter)

typedef NS_ENUM(NSUInteger, JavaUtilFormatter_BigDecimalLayoutForm) {
  JavaUtilFormatter_BigDecimalLayoutForm_SCIENTIFIC = 0,
  JavaUtilFormatter_BigDecimalLayoutForm_DECIMAL_FLOAT = 1,
};

@interface JavaUtilFormatter_BigDecimalLayoutFormEnum : JavaLangEnum < NSCopying > {
}

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *JavaUtilFormatter_BigDecimalLayoutFormEnum_values();

+ (JavaUtilFormatter_BigDecimalLayoutFormEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT JavaUtilFormatter_BigDecimalLayoutFormEnum *JavaUtilFormatter_BigDecimalLayoutFormEnum_valueOfWithNSString_(NSString *name);
- (id)copyWithZone:(NSZone *)zone;

@end

FOUNDATION_EXPORT BOOL JavaUtilFormatter_BigDecimalLayoutFormEnum_initialized;
J2OBJC_STATIC_INIT(JavaUtilFormatter_BigDecimalLayoutFormEnum)

FOUNDATION_EXPORT JavaUtilFormatter_BigDecimalLayoutFormEnum *JavaUtilFormatter_BigDecimalLayoutFormEnum_values_[];

#define JavaUtilFormatter_BigDecimalLayoutFormEnum_SCIENTIFIC JavaUtilFormatter_BigDecimalLayoutFormEnum_values_[JavaUtilFormatter_BigDecimalLayoutForm_SCIENTIFIC]
J2OBJC_ENUM_CONSTANT_GETTER(JavaUtilFormatter_BigDecimalLayoutFormEnum, SCIENTIFIC)

#define JavaUtilFormatter_BigDecimalLayoutFormEnum_DECIMAL_FLOAT JavaUtilFormatter_BigDecimalLayoutFormEnum_values_[JavaUtilFormatter_BigDecimalLayoutForm_DECIMAL_FLOAT]
J2OBJC_ENUM_CONSTANT_GETTER(JavaUtilFormatter_BigDecimalLayoutFormEnum, DECIMAL_FLOAT)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFormatter_BigDecimalLayoutFormEnum)

@interface JavaUtilFormatter_CachedDecimalFormat : NSObject {
 @public
  LibcoreIcuNativeDecimalFormat *decimalFormat_;
  LibcoreIcuLocaleData *currentLocaleData_;
  NSString *currentPattern_;
}

- (instancetype)init;

- (LibcoreIcuNativeDecimalFormat *)updateWithLibcoreIcuLocaleData:(LibcoreIcuLocaleData *)localeData
                                                     withNSString:(NSString *)pattern;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFormatter_CachedDecimalFormat)

J2OBJC_FIELD_SETTER(JavaUtilFormatter_CachedDecimalFormat, decimalFormat_, LibcoreIcuNativeDecimalFormat *)
J2OBJC_FIELD_SETTER(JavaUtilFormatter_CachedDecimalFormat, currentLocaleData_, LibcoreIcuLocaleData *)
J2OBJC_FIELD_SETTER(JavaUtilFormatter_CachedDecimalFormat, currentPattern_, NSString *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFormatter_CachedDecimalFormat)

#define JavaUtilFormatter_FormatToken_DEFAULT_PRECISION 6
#define JavaUtilFormatter_FormatToken_FLAGS_UNSET 0
#define JavaUtilFormatter_FormatToken_FLAG_ZERO 16
#define JavaUtilFormatter_FormatToken_LAST_ARGUMENT_INDEX -2
#define JavaUtilFormatter_FormatToken_UNSET -1

@interface JavaUtilFormatter_FormatToken : NSObject {
 @public
  jboolean flagComma_;
  jboolean flagMinus_;
  jboolean flagParenthesis_;
  jboolean flagPlus_;
  jboolean flagSharp_;
  jboolean flagSpace_;
  jboolean flagZero_;
}

- (jboolean)isDefault;

- (jboolean)isPrecisionSet;

- (jint)getArgIndex;

- (void)setArgIndexWithInt:(jint)index;

- (jint)getWidth;

- (void)setWidthWithInt:(jint)width;

- (jint)getPrecision;

- (void)setPrecisionWithInt:(jint)precise;

- (NSString *)getStrFlags;

- (jboolean)setFlagWithInt:(jint)ch;

- (jchar)getConversionType;

- (void)setConversionTypeWithChar:(jchar)c;

- (jchar)getDateSuffix;

- (void)setDateSuffixWithChar:(jchar)c;

- (jboolean)requireArgument;

- (void)checkFlagsWithId:(id)arg;

- (JavaUtilUnknownFormatConversionException *)unknownFormatConversionException;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFormatter_FormatToken)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaUtilFormatter_FormatToken, LAST_ARGUMENT_INDEX, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilFormatter_FormatToken, UNSET, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilFormatter_FormatToken, FLAGS_UNSET, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilFormatter_FormatToken, DEFAULT_PRECISION, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilFormatter_FormatToken, FLAG_ZERO, jint)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFormatter_FormatToken)

@interface JavaUtilFormatter_FormatSpecifierParser : NSObject {
}

- (instancetype)initWithNSString:(NSString *)format;

- (JavaUtilFormatter_FormatToken *)parseFormatTokenWithInt:(jint)offset;

- (NSString *)getFormatSpecifierText;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFormatter_FormatSpecifierParser)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFormatter_FormatSpecifierParser)

@interface JavaUtilFormatter_$1 : JavaLangThreadLocal {
}

- (JavaUtilFormatter_CachedDecimalFormat *)initialValue OBJC_METHOD_FAMILY_NONE;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFormatter_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFormatter_$1)

#endif // _JavaUtilFormatter_H_
