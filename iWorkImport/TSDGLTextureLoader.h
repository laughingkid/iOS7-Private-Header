/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface TSDGLTextureLoader : NSObject

{

}



+ (id)p_textureInfoFromCGImage:(struct CGImage *)arg1 generateMipmaps:(_Bool)arg2;

+ (id)textureWithCGImage:(struct CGImage *)arg1 generateMipmaps:(_Bool)arg2 error:(id *)arg3;

+ (id)textureWithContentsOfFile:(id)arg1 generateMipmaps:(_Bool)arg2 error:(id *)arg3;



@end

