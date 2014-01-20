/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSLock, NSThread;



@interface BKSAccelerometer : NSObject

{

    id <BKSAccelerometerDelegate> _delegate;

    struct __CFRunLoopSource *_accelerometerEventsSource;

    struct __CFRunLoop *_accelerometerEventsRunLoop;

    double _interval;

    NSLock *_lock;

    _Bool _orientationEventsEnabled;

    int _orientationCheckToken;

    int _orientationNotificationsToken;

    NSThread *_orientationEventsThread;

    float _xThreshold;

    float _yThreshold;

    float _zThreshold;

}



- (void)_checkIn;

- (void)_checkOut;

- (void)_orientationDidChange;

- (id)_orientationEventsThread;

- (void)_serverWasRestarted;

@property(nonatomic) _Bool accelerometerEventsEnabled;

- (int)currentDeviceOrientation;

- (void)dealloc;

@property(nonatomic) id <BKSAccelerometerDelegate> delegate;

- (id)init;

@property(nonatomic) _Bool orientationEventsEnabled;

@property(nonatomic) double updateInterval;

@property(nonatomic) float xThreshold;

@property(nonatomic) float yThreshold;

@property(nonatomic) float zThreshold;



@end

