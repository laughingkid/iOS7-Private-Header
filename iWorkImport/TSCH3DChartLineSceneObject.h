/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DChartSeriesSceneObject.h"


__attribute__((visibility("hidden")))

@interface TSCH3DChartLineSceneObject : TSCH3DChartSeriesSceneObject

{

}



+ (float)chartSeriesDepth;

+ (float)chartSeriesDepthOffsetFactor;

+ (id)chartSeriesType;

+ (struct MeshData)createMeshForSeries:(id)arg1;

- (_Bool)alwaysRenderForElementBlendAnimationClip;

- (struct EdgeDetectionParameters)edgeDetectionParameters;

- (_Bool)shouldRenderSeries:(id)arg1;

- (void)updateTilingEffect:(struct TexCoordTilingShaderEffectState *)arg1 properties:(id)arg2 textureTiling:(id)arg3 size:(const tvec3_17f03ce0 *)arg4;



@end


