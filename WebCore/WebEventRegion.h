/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@interface WebEventRegion : NSObject <NSCopying>

{

    struct CGPoint p1;

    struct CGPoint p2;

    struct CGPoint p3;

    struct CGPoint p4;

}



- (id).cxx_construct;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)description;

- (_Bool)hitTest:(struct CGPoint)arg1;

- (id)initWithPoints:(struct CGPoint)arg1:(struct CGPoint)arg2:(struct CGPoint)arg3:(struct CGPoint)arg4;

- (_Bool)isEqual:(id)arg1;

- (struct FloatQuad)quad;



@end

