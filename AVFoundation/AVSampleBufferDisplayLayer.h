/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CALayer.h"



@class AVSampleBufferDisplayLayerInternal, NSString;



@interface AVSampleBufferDisplayLayer : CALayer

{

    AVSampleBufferDisplayLayerInternal *_sampleBufferDisplayLayerInternal;

}



- (void)_addAnimationsForContentLayer:(id)arg1 size:(struct CGSize)arg2 gravity:(id)arg3;

- (int)_createVideoQueue;

- (void)_refreshAboveHighWaterLevel;

- (void)_setControlTimebase:(struct OpaqueCMTimebase *)arg1;

- (void)_updatePresentationSize:(struct CGSize)arg1;

- (void)addAnimation:(id)arg1 forKey:(id)arg2;

@property(retain) struct OpaqueCMTimebase *controlTimebase;

- (void)dealloc;

- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;

- (void)finalize;

- (void)flush;

- (void)flushAndRemoveImage;

- (id)init;

@property(readonly, getter=isReadyForMoreMediaData) _Bool readyForMoreMediaData;

- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(id)arg2;

- (void)setBounds:(struct CGRect)arg1;

@property(copy) NSString *videoGravity;

- (void)stopRequestingMediaData;



@end

