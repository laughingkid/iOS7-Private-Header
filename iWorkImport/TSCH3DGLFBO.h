/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DGLFramebuffer.h"


@class TSCH3DFBOLoader, TSCH3DResource;



__attribute__((visibility("hidden")))

@interface TSCH3DGLFBO : TSCH3DGLFramebuffer

{

    TSCH3DFBOLoader *mLoader;

    TSCH3DResource *mResource;

    _Bool mPreserveProtectedResourceAfterDestroy;

}



+ (id)FBOFromContext:(id)arg1 attributes:(const struct FramebufferAttributes *)arg2 eaglLayer:(id)arg3;

+ (id)FBOFromContext:(id)arg1 size:(tvec2_3b141483 *)arg2 attributes:(const struct FramebufferAttributes *)arg3 colorAllocator:(id)arg4 depthAllocator:(id)arg5 resource:(id)arg6;

+ (id)FBOFromContext:(id)arg1 size:(const tvec2_3b141483 *)arg2 attributes:(const struct FramebufferAttributes *)arg3 textureAttributes:(const struct FramebufferAttributes *)arg4 resource:(id)arg5;

+ (id)FBOFromContext:(id)arg1 size:(const tvec2_3b141483 *)arg2 attributes:(const struct FramebufferAttributes *)arg3 textureAttributes:(const struct FramebufferAttributes *)arg4 resource:(id)arg5 FBOClass:(Class)arg6 RTTRenderbufferAllocatorBlock:(id)arg7;

- (id)FBOHandleForSession:(id)arg1;

- (id)GLHandleForSession:(id)arg1;

- (_Bool)activateInsideSession:(id)arg1;

- (void)bindColorbufferInSession:(id)arg1;

- (_Bool)bindInSession:(id)arg1;

- (void)dealloc;

- (id)description;

- (void)destroyResourcesInSession:(id)arg1;

- (void)disableSamplingInSession:(id)arg1;

- (void)discardBuffers;

- (void)discardColorBuffer;

- (void)discardDepthBuffer;

- (unsigned long long)estimatedMemroyInBytes;

- (id)initFromContext:(id)arg1 size:(tvec2_3b141483 *)arg2 attributes:(const struct FramebufferAttributes *)arg3 colorAllocator:(id)arg4 depthAllocator:(id)arg5 resource:(id)arg6;

- (_Bool)isProtectedInSession:(id)arg1;

- (_Bool)isTexturable;

- (struct SessionLoadResourceResult)loadInsideSession:(id)arg1;

- (id)loader;

@property(nonatomic) _Bool preserveProtectedResourceAfterDestroy; // @synthesize preserveProtectedResourceAfterDestroy=mPreserveProtectedResourceAfterDestroy;

- (void)protectInSession:(id)arg1 unprotectOnFail:(_Bool)arg2;

- (tvec2_3b141483)size;

- (unsigned int)type;

- (void)unprotectInSession:(id)arg1 clearOnFailProtection:(_Bool)arg2;

- (_Bool)validForSession:(id)arg1;



@end

