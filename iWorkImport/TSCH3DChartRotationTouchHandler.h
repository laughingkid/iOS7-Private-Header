/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DChartTouchHandler.h"


__attribute__((visibility("hidden")))

@interface TSCH3DChartRotationTouchHandler : TSCH3DChartTouchHandler

{

    tvec3_17f03ce0 mValue;

    tvec2_84d5962d mDelta;

    tvec2_84d5962d mOrigin;

}



+ (tvec3_17f03ce0)clampRotation:(tvec3_17f03ce0 *)arg1 chartType:(id)arg2;

+ (id)handlerWithRep:(id)arg1 rotation:(const tvec3_17f03ce0 *)arg2;

- (id).cxx_construct;

- (void)addRotation:(const tvec2_84d5962d *)arg1;

- (void)beginWithTouchPoint:(const struct TSCH3DTouchPoint *)arg1;

- (void)cancelWithTouchPoint:(const struct TSCH3DTouchPoint *)arg1;

- (tvec3_17f03ce0)clampRotation:(tvec3_17f03ce0 *)arg1;

- (void)endWithTouchPoint:(const struct TSCH3DTouchPoint *)arg1;

- (_Bool)hasChanges;

- (id)initWithRep:(id)arg1 rotation:(const tvec3_17f03ce0 *)arg2;

- (void)moveWithTouchPoint:(const struct TSCH3DTouchPoint *)arg1;

@property(nonatomic) tvec3_17f03ce0 rotation;

- (void)sendCommand;



@end

