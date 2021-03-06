/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class VKPolylineOverlay, VKPolylineOverlaySection;



__attribute__((visibility("hidden")))

@interface VKPolylinePath : NSObject

{

    VKPolylineOverlay *_overlay;

    VKPolylineOverlaySection *_section;

    Vec2Imp_1782d7e3 *_points;

    unsigned int _pointCount;

    _Bool _ownsPoints;

    struct PolylineCoordinate _routeStart;

    struct PolylineCoordinate _routeEnd;

    BOOL _trafficSpeed;

}



- (id).cxx_construct;

- (void)assignPoints:(Vec2Imp_1782d7e3 *)arg1 count:(unsigned int)arg2;

- (void)assignTo:(id)arg1 withSegment:(const struct TrafficSegment *)arg2;

- (void)dealloc;

- (id)description;

@property(readonly) _Bool hasCompletedMapMatching;

- (id)initWithOverlay:(id)arg1 section:(id)arg2;

- (id)initWithOverlay:(id)arg1 section:(id)arg2 routeStartIndex:(unsigned int)arg3 routeEndIndex:(unsigned int)arg4;

- (Vec2Imp_1782d7e3)interpolateAt:(const struct PolylineCoordinate *)arg1;

@property(readonly) _Bool isMapMatched;

- (struct PolylineCoordinate)pathIndexFromRouteIndex:(struct PolylineCoordinate)arg1;

@property(readonly, nonatomic) unsigned int pointCount; // @synthesize pointCount=_pointCount;

@property(readonly, nonatomic) Vec2Imp_1782d7e3 *points; // @synthesize points=_points;

@property(nonatomic) struct PolylineCoordinate routeEnd; // @synthesize routeEnd=_routeEnd;

@property(nonatomic) struct PolylineCoordinate routeStart; // @synthesize routeStart=_routeStart;

@property(readonly, nonatomic) VKPolylineOverlaySection *section; // @synthesize section=_section;

@property(nonatomic) BOOL trafficSpeed; // @synthesize trafficSpeed=_trafficSpeed;

- (void)splitTrafficSegmentationAndAddTo:(id)arg1 with:(id)arg2;



@end


