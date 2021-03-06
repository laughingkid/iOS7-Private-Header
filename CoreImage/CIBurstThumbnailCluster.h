/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CIBurstYUVImage, NSMutableArray, NSMutableDictionary;



__attribute__((visibility("hidden")))

@interface CIBurstThumbnailCluster : NSObject

{

    NSMutableArray *burstImages;

    NSMutableDictionary *imageProps;

    CIBurstYUVImage *image;

    id completionBlock;

}



- (void)addItemsFromCluster:(id)arg1;

@property NSMutableArray *burstImages; // @synthesize burstImages;

@property id completionBlock; // @synthesize completionBlock;

- (float)computeMergeCost:(id)arg1:(int *)arg2:(int)arg3;

- (void)dealloc;

@property CIBurstYUVImage *image; // @synthesize image;

@property NSMutableDictionary *imageProps; // @synthesize imageProps;

- (id)init;

- (id)initWithImageData:(id)arg1 dict:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(id)arg5;

- (void)releaseImage;



@end


