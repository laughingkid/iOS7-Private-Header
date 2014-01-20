/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSURLDataDecoder.h"

#import "NSURLDownloadDecoder.h"



@class NSString;



@interface NSGZipDecoder : NSObject <NSURLDownloadDecoder, NSURLDataDecoder>

{

    struct z_stream_s _stream;

    unsigned long long _modificationTime;

    NSString *_filename;

    _Bool _streamInitialized;

    _Bool _decodedHeader;

    _Bool _finishedInflating;

    _Bool _pad;

}



+ (id)MIMEType;

+ (_Bool)canDecodeDownloadHeaderData:(id)arg1;

+ (_Bool)decodeDownloadHeader:(id)arg1 headerLength:(int *)arg2 modificationTime:(unsigned long long *)arg3 filename:(id *)arg4;

- (void)dealloc;

- (id)decodeData:(id)arg1;

- (_Bool)decodeDownloadData:(id)arg1 dataForkData:(id *)arg2 resourceForkData:(id *)arg3;

- (id)fileAttributes;

- (id)filenameWithOriginalFilename:(id)arg1;

- (void)finalize;

- (_Bool)finishDownloadDecoding;

- (id)init;

- (_Bool)isFinishedDecoding;



@end

