/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MKMultiPoint.h"


#import "MKOverlay.h"



@class NSString;



@interface MKPolyline : MKMultiPoint <MKOverlay>

{

}



+ (id)polylineWithCoordinates:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;

+ (id)polylineWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;

- (void)_calculateBounds;

@property(readonly, nonatomic) CDStruct_90e2a262 boundingMapRect;

@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;

- (_Bool)intersectsMapRect:(CDStruct_90e2a262)arg1;



// Remaining properties

@property(readonly, nonatomic) NSString *subtitle;

@property(readonly, nonatomic) NSString *title;



@end


