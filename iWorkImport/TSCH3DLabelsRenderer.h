/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSCH3DCamera, TSCH3DDataBufferResource, TSCH3DLabelResource, TSCH3DLabelResources, TSCH3DLabelsMeshRenderer, TSCH3DLabelsRendererTransforms, TSCH3DResource, TSCH3DSceneRenderPipeline;



__attribute__((visibility("hidden")))

@interface TSCH3DLabelsRenderer : NSObject

{

    TSCH3DResource *mLabelQuad;

    _Bool mUseLabelBounds;

    TSCH3DLabelResource *mLabel;

    TSCH3DLabelResources *mResources;

    TSCH3DSceneRenderPipeline *mPipeline;

    TSCH3DCamera *mLabelCamera;

    struct LabelRenderInfo mInfo;

    TSCH3DDataBufferResource *mMesh;

    TSCH3DLabelsMeshRenderer *mMeshRenderer;

    TSCH3DLabelsRendererTransforms *mTransforms;

}



+ (id)renderCacheKey;

+ (id)renderer;

- (id).cxx_construct;

- (_Bool)beginResources:(id)arg1 expectedSize:(tvec2_3b141483 *)arg2;

- (_Bool)cacheEnabled;

- (void)dealloc;

- (void)delegateDidSubmitLabel;

- (id)effects;

- (void)endResources;

- (_Bool)hasCachedLabels;

- (id)init;

- (_Bool)isCacheValid;

@property(retain, nonatomic) TSCH3DLabelResource *label; // @synthesize label=mLabel;

@property(readonly, nonatomic) TSCH3DCamera *labelCamera; // @synthesize labelCamera=mLabelCamera;

- (id)labelQuad;

@property(retain, nonatomic) TSCH3DDataBufferResource *mesh; // @synthesize mesh=mMesh;

@property(retain, nonatomic) TSCH3DLabelsMeshRenderer *meshRenderer; // @synthesize meshRenderer=mMeshRenderer;

- (id)p_renderCacheFromScene:(id)arg1 created:(_Bool *)arg2 createIfAbsent:(_Bool)arg3;

- (id)p_renderCacheID;

- (id)p_renderCacheKey;

@property(retain, nonatomic) TSCH3DSceneRenderPipeline *pipeline; // @synthesize pipeline=mPipeline;

- (void)postrender:(id)arg1;

- (void)prepareCachedIndex:(const tvec2_3b141483 *)arg1 string:(id)arg2 alignmentPadding:(const tvec2_84d5962d *)arg3 width:(double)arg4 bitmapContextInfo:(id)arg5;

- (void)prerender:(id)arg1;

- (void)renderAtPosition:(const tvec3_17f03ce0 *)arg1 offset:(const tvec3_17f03ce0 *)arg2 alignment:(unsigned int)arg3 offset2D:(const tvec2_84d5962d *)arg4 rotation:(float)arg5 externalAttribute:(const struct ExternalLabelAttribute *)arg6;

@property(readonly, nonatomic) struct LabelRenderInfo renderInfo; // @synthesize renderInfo=mInfo;

@property(retain, nonatomic) TSCH3DLabelResources *resources; // @synthesize resources=mResources;

@property(nonatomic) _Bool useLabelBounds; // @synthesize useLabelBounds=mUseLabelBounds;

- (const tmat4x4_3074befe *)unitToWorld;

- (const tmat4x4_3074befe *)worldToStage;



@end

