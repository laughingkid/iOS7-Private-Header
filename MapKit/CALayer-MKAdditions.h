/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CALayer.h"



@interface CALayer (MKAdditions)

@property(readonly, nonatomic) CALayer *_mapKit_mapLayer;

- (void)_mapkit_addAnimation:(id)arg1 forKey:(id)arg2 completion:(id)arg3;

- (void)_mapkit_removeAnimationImmediatelyForKey:(id)arg1;

@property(readonly, nonatomic) CALayer *currentLayer;

- (_Bool)getPresentationValue:(id *)arg1 forKey:(id)arg2 removeAnimation:(_Bool)arg3;

- (_Bool)getPresentationValue:(id *)arg1 forValueKey:(id)arg2 animationKey:(id)arg3 removeAnimation:(_Bool)arg4;

@end

