/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AVAssetWriterInputHelper, AVAssetWriterInputInternal, AVOutputSettings, AVWeakReference, NSArray, NSDictionary, NSString;



@interface AVAssetWriterInput : NSObject

{

    AVAssetWriterInputInternal *_internal;

}



+ (id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2;

+ (id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription *)arg3;

+ (void)initialize;

+ (id)keyPathsForValuesAffectingReadyForMoreMediaData;

+ (id)keyPathsForValuesAffectingStatus;

@property(nonatomic, getter=_alternateGroupID, setter=_setAlternateGroupID:) short alternateGroupID;

- (_Bool)_appendPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;

@property(retain, nonatomic, getter=_helper, setter=_setHelper:) AVAssetWriterInputHelper *helper;

@property(nonatomic, getter=_isAttachedToPixelBufferAdaptor, setter=_setAttachedToPixelBufferAdaptor:) _Bool attachedToPixelBufferAdaptor;

@property(readonly, nonatomic, getter=_outputSettingsObject) AVOutputSettings *outputSettingsObject;

@property(readonly, nonatomic, getter=_pixelBufferPool) struct __CVPixelBufferPool *pixelBufferPool;

- (_Bool)_prepareForWritingWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1 mediaFileType:(id)arg2 error:(id *)arg3;

- (void)_prepareToEndSession;

- (_Bool)_prepareToFinishWritingReturningError:(id *)arg1;

@property(copy, nonatomic, getter=_sourcePixelBufferAttributes, setter=_setSourcePixelBufferAttributes:) NSDictionary *sourcePixelBufferAttributes;

@property(retain, nonatomic, getter=_weakReferenceToAssetWriter, setter=_setWeakReferenceToAssetWriter:) AVWeakReference *weakReferenceToAssetWriter;

@property(readonly, nonatomic, getter=_status) long long status;

- (void)_tellAssetWriterToTransitionToFailedStatusWithError:(id)arg1;

@property(readonly, nonatomic, getter=_trackID) int trackID;

@property(readonly, nonatomic, getter=_trackReferences) NSDictionary *trackReferences;

- (void)_transitionToTerminalStatus:(long long)arg1;

- (void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;

- (_Bool)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;

- (_Bool)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;

- (void)dealloc;

- (id)description;

@property(nonatomic) _Bool expectsMediaDataInRealTime;

- (id)extendedLanguageTag;

- (void)finalize;

- (id)init;

- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2;

- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription *)arg3;

@property(readonly, nonatomic, getter=isReadyForMoreMediaData) _Bool readyForMoreMediaData;

- (id)languageCode;

- (long long)layer;

- (void)markAsFinished;

- (_Bool)marksOutputTrackAsEnabled;

- (int)mediaTimeScale;

@property(readonly, nonatomic) NSString *mediaType;

@property(copy, nonatomic) NSArray *metadata;

- (struct CGSize)naturalSize;

@property(readonly) long long numberOfAppendFailures;

@property(readonly, nonatomic) NSDictionary *outputSettings;

- (float)preferredVolume;

- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(id)arg2;

- (void)setExtendedLanguageTag:(id)arg1;

- (void)setLanguageCode:(id)arg1;

- (void)setLayer:(long long)arg1;

- (void)setMarksOutputTrackAsEnabled:(_Bool)arg1;

- (void)setMediaTimeScale:(int)arg1;

- (void)setNaturalSize:(struct CGSize)arg1;

- (void)setPreferredVolume:(float)arg1;

- (void)setTransform:(struct CGAffineTransform)arg1;

@property(readonly, nonatomic) struct opaqueCMFormatDescription *sourceFormatHint;

- (struct CGAffineTransform)transform;



@end


