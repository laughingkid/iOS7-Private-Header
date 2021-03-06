/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSDGLDataBuffer, TSDGLFrameBuffer, TSDGLShader;



__attribute__((visibility("hidden")))

@interface TSDGLBloomEffect : NSObject

{

    struct CGSize _effectSize;

    struct CGSize _blurBufferSize;

    TSDGLFrameBuffer *_colorFramebuffer;

    TSDGLFrameBuffer *_blurFramebuffer;

    TSDGLDataBuffer *_dataBuffer;

    TSDGLDataBuffer *_blurTransferDataBuffer;

    TSDGLDataBuffer *_blurDataBuffer;

    TSDGLShader *_blurHorizontalShader;

    TSDGLShader *_blurVerticalShader;

    TSDGLShader *_bloomShader;

    TSDGLShader *_fboTransferShader;

    int _oldViewportRect[4];

    _Bool _oldViewportRectInitialized;

}



- (void)bindFramebuffer;

- (void)dealloc;

- (void)drawBloomEffectWithMVPMatrix:(struct CATransform3D)arg1 bloomAmount:(double)arg2 currentGLFramebuffer:(int)arg3;

- (id)initWithEffectSize:(struct CGSize)arg1 blurScale:(double)arg2;

- (void)p_blurColorBufferWithPreviousFramebuffer:(int)arg1;

- (void)p_setupBuffers;

- (void)p_setupShaders;

- (void)teardown;

- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1;



@end


