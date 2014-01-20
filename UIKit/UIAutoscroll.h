/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSTimer, UIView<UIAutoscrollContainer>;



__attribute__((visibility("hidden")))

@interface UIAutoscroll : NSObject

{

    id m_target;

    struct CGPoint m_point;

    UIView<UIAutoscrollContainer> *m_scrollContainer;

    int m_directions;

    double m_repeatInterval;

    NSTimer *m_timer;

    unsigned long long m_count;

    _Bool m_active;

}



@property(nonatomic) _Bool active; // @synthesize active=m_active;

@property(nonatomic) unsigned long long count; // @synthesize count=m_count;

- (void)dealloc;

@property(nonatomic) int directions; // @synthesize directions=m_directions;

- (void)invalidate;

@property(nonatomic) struct CGPoint point; // @synthesize point=m_point;

@property(nonatomic) double repeatInterval; // @synthesize repeatInterval=m_repeatInterval;

@property(retain, nonatomic) UIView<UIAutoscrollContainer> *scrollContainer; // @synthesize scrollContainer=m_scrollContainer;

@property(retain, nonatomic) id target; // @synthesize target=m_target;

- (_Bool)startAutoscroll:(id)arg1 scrollContainer:(id)arg2 point:(struct CGPoint)arg3 directions:(int)arg4 repeatInterval:(double)arg5;

- (void)timerFired:(id)arg1;



@end

