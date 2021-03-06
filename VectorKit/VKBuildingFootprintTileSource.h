/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "VKVectorTileSource.h"


__attribute__((visibility("hidden")))

@interface VKBuildingFootprintTileSource : VKVectorTileSource

{

    long long _minimumZoomLevel;

    _Bool _makeFacades;

}



- (id)initWithTileSet:(id)arg1;

@property(nonatomic) _Bool makeFacades; // @synthesize makeFacades=_makeFacades;

- (unsigned long long)mapLayerForZoomLevelRange;

- (_Bool)maximumZoomLevelBoundsCamera;

- (long long)minimumZoomLevel;

- (_Bool)minimumZoomLevelBoundsCamera;

- (void)setMinimumZoomLevel:(unsigned long long)arg1;

- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;



@end


