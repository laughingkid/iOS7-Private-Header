/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@interface GEOFeatureStyleAttributes : NSObject <NSCopying>

{

    struct {

        unsigned int key;

        int value;

    } v[16];

}



- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)description;

- (int)drivingSide;

- (_Bool)hasDrivingSide;

- (unsigned long long)hash;

- (id)init;

- (id)initWithAttributes:(unsigned int)arg1;

- (_Bool)isDrivable;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isFreeway;

- (_Bool)isRailway;

- (_Bool)isRamp;

- (_Bool)isTunnel;

- (_Bool)isWalkable;

- (int)rampDirection;

- (int)rampType;

- (_Bool)shouldSuppress3DBuildingStrokes;

- (void)sort;



@end

