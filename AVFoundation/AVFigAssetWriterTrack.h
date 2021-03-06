/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AVMediaFileType, AVWeakReference, NSObject<OS_dispatch_queue>, NSString;



@interface AVFigAssetWriterTrack : NSObject

{

    AVWeakReference *_weakReference;

    struct OpaqueFigAssetWriter *_figAssetWriter;

    int _trackID;

    NSString *_mediaType;

    AVMediaFileType *_mediaFileType;

    NSObject<OS_dispatch_queue> *_aboveHighWaterLevelQueue;

    _Bool _aboveHighWaterLevel;

    CDStruct_1b6d18a9 _sampleBufferCoalescingInterval;

}



+ (id)assetWriterTrackWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 error:(id *)arg6;

- (int)_attachToFigAssetWriterUsingFormatSpecification:(id)arg1 sourcePixelBufferAttributes:(id)arg2 error:(id *)arg3;

- (void)_figAssetWriterDidDropBelowLowWaterLevelForTrackID:(int)arg1;

- (void)_refreshAboveHighWaterLevel;

- (_Bool)addPixelBuffer:(struct __CVBuffer *)arg1 atPresentationTime:(CDStruct_1b6d18a9)arg2 error:(id *)arg3;

- (_Bool)addSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;

- (void)dealloc;

@property(readonly, nonatomic) struct OpaqueFigAssetWriter *figAssetWriter; // @synthesize figAssetWriter=_figAssetWriter;

- (void)finalize;

- (id)init;

- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 error:(id *)arg6;

@property(readonly, getter=isAboveHighWaterLevel) _Bool aboveHighWaterLevel;

- (_Bool)markEndOfDataReturningError:(id *)arg1;

@property(readonly, nonatomic) AVMediaFileType *mediaFileType; // @synthesize mediaFileType=_mediaFileType;

@property(readonly, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;

@property(readonly, nonatomic) struct __CVPixelBufferPool *pixelBufferPool;

- (void)prepareToEndSession;

@property(nonatomic) CDStruct_1b6d18a9 sampleBufferCoalescingInterval; // @synthesize sampleBufferCoalescingInterval=_sampleBufferCoalescingInterval;

- (void)setAlternateGroupID:(short)arg1;

- (void)setExcludeFromAutoSelection:(_Bool)arg1;

- (void)setExtendedLanguageTag:(id)arg1;

- (void)setFigDimensions:(id)arg1;

- (void)setFigMetadata:(id)arg1;

- (void)setFigTrackMatrix:(id)arg1;

- (void)setLanguageCode:(id)arg1;

- (void)setLayer:(long long)arg1;

- (void)setMarksOutputTrackAsEnabled:(_Bool)arg1;

- (void)setMediaTimeScale:(int)arg1;

- (void)setTrackVolume:(float)arg1;

@property(readonly, nonatomic) int trackID; // @synthesize trackID=_trackID;



@end


