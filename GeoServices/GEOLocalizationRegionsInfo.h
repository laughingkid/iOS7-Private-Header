/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDictionary, NSLock;



__attribute__((visibility("hidden")))

@interface GEOLocalizationRegionsInfo : NSObject

{

    NSDictionary *_regions;

    NSLock *_regionsLock;

}



- (void)dealloc;

- (id)init;

- (_Bool)needsLocalizationForKey:(const struct _GEOTileKey *)arg1 language:(id)arg2;

- (void)reset;



@end


