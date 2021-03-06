/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "BKSAccelerometerDelegate.h"



@class BKSAccelerometer;



@interface SBSAccelerometer : NSObject <BKSAccelerometerDelegate>

{

    id <SBSAccelerometerDelegate> _delegate;

    BKSAccelerometer *_bksMirror;

}



- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;

- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;

@property(nonatomic) _Bool accelerometerEventsEnabled;

- (int)currentDeviceOrientation;

- (void)dealloc;

@property(nonatomic) id <SBSAccelerometerDelegate> delegate;

- (id)init;

@property(nonatomic) _Bool orientationEventsEnabled;

@property(nonatomic) double updateInterval;

@property(nonatomic) float xThreshold;

@property(nonatomic) float yThreshold;

@property(nonatomic) float zThreshold;



@end


