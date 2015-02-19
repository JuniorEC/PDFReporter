//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/ByteBufferAsCharBuffer.java
//

#ifndef _JavaNioByteBufferAsCharBuffer_H_
#define _JavaNioByteBufferAsCharBuffer_H_

@class IOSCharArray;
@class JavaNioByteBuffer;
@class JavaNioByteOrder;

#include "J2ObjC_header.h"
#include "java/nio/CharBuffer.h"

@interface JavaNioByteBufferAsCharBuffer : JavaNioCharBuffer {
}

+ (JavaNioCharBuffer *)asCharBufferWithJavaNioByteBuffer:(JavaNioByteBuffer *)byteBuffer;

- (JavaNioCharBuffer *)asReadOnlyBuffer;

- (JavaNioCharBuffer *)compact;

- (JavaNioCharBuffer *)duplicate;

- (jchar)get;

- (jchar)getWithInt:(jint)index;

- (JavaNioCharBuffer *)getWithCharArray:(IOSCharArray *)dst
                                withInt:(jint)dstOffset
                                withInt:(jint)charCount;

- (jboolean)isDirect;

- (jboolean)isReadOnly;

- (JavaNioByteOrder *)order;

- (IOSCharArray *)protectedArray;

- (jint)protectedArrayOffset;

- (jboolean)protectedHasArray;

- (JavaNioCharBuffer *)putWithChar:(jchar)c;

- (JavaNioCharBuffer *)putWithInt:(jint)index
                         withChar:(jchar)c;

- (JavaNioCharBuffer *)putWithCharArray:(IOSCharArray *)src
                                withInt:(jint)srcOffset
                                withInt:(jint)charCount;

- (JavaNioCharBuffer *)slice;

- (JavaNioCharBuffer *)subSequenceFrom:(int)start to:(int)end;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioByteBufferAsCharBuffer)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT JavaNioCharBuffer *JavaNioByteBufferAsCharBuffer_asCharBufferWithJavaNioByteBuffer_(JavaNioByteBuffer *byteBuffer);
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNioByteBufferAsCharBuffer)

#endif // _JavaNioByteBufferAsCharBuffer_H_