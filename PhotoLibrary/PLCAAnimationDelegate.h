/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface PLCAAnimationDelegate : NSObject

{

    id _completion;

    id _start;

}



- (void)animationDidStart:(id)arg1;

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;

@property(copy, nonatomic) id completion; // @synthesize completion=_completion;

- (void)dealloc;

@property(copy, nonatomic) id start; // @synthesize start=_start;



@end


