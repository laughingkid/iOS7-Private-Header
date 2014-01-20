/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSDGLDataBuffer, TSDGLDataBufferAttribute, TSDGLShader;



__attribute__((visibility("hidden")))

@interface KNWipeDataBuffer : NSObject

{

    unsigned long long mDirection;

    double mBlurFraction;

    struct CATransform3D mMVPMatrix;

    struct CGRect mVertexRect;

    struct CGRect mTextureRect;

    TSDGLDataBufferAttribute *mSolidPositionAttribute;

    TSDGLDataBufferAttribute *mSolidTexCoordAttribute;

    TSDGLDataBuffer *mSolidDataBuffer;

    TSDGLShader *mSolidShader;

    TSDGLDataBufferAttribute *mWipePositionAttribute;

    TSDGLDataBufferAttribute *mWipeTexCoordAttribute;

    TSDGLDataBufferAttribute *mWipeOpacityAttribute;

    TSDGLDataBuffer *mWipeDataBuffer;

    TSDGLShader *mWipeShader;

}



@property(nonatomic) struct CATransform3D MVPMatrix; // @synthesize MVPMatrix=mMVPMatrix;

@property(nonatomic) double blurFraction; // @synthesize blurFraction=mBlurFraction;

- (void)dealloc;

@property(nonatomic) unsigned long long direction; // @synthesize direction=mDirection;

- (void)drawWipeWithPercent:(double)arg1 opacity:(double)arg2;

- (id)initWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2;

- (CDStruct_b2fbf00d)p_texCoordFromX:(double)arg1 y:(double)arg2;

- (void)p_updateVertexInBuffer:(id)arg1 atIndex:(unsigned long long)arg2 x:(double)arg3 y:(double)arg4 opacity:(double)arg5;

- (void)updateWipeWithPercent:(double)arg1 solidVertexCount:(unsigned long long *)arg2 wipeVertexCount:(unsigned long long *)arg3;



@end

