/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIGestureRecognizer.h"


@class UIDelayedAction;



__attribute__((visibility("hidden")))

@interface UIScrollViewPagingSwipeGestureRecognizer : UIGestureRecognizer

{

    UIDelayedAction *_swipeFailureDelay;

    struct CGPoint _startLocation;

    struct CGPoint _lastLocation;

    double _lastTime;

    int _directionalFailureCount;

}



- (void)_processNewLocation:(struct CGPoint)arg1;

- (void)_resetGestureRecognizer;

- (void)clearTimer;

- (void)dealloc;

- (void)enoughTimeElapsed:(id)arg1;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;



@end

