/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray;



__attribute__((visibility("hidden")))

@interface GEOTileEditionUpdate : NSObject

{

    NSMutableArray *_entries;

    _Bool _flushEverything;

}



- (void)addTileset:(unsigned int)arg1 edition:(unsigned int)arg2 provider:(unsigned int)arg3;

- (void)dealloc;

@property(nonatomic) _Bool flushEverything; // @synthesize flushEverything=_flushEverything;

- (id)init;

- (void)tileset:(unsigned int *)arg1 edition:(unsigned int *)arg2 provider:(unsigned int *)arg3 atIndex:(unsigned long long)arg4;

- (unsigned long long)tilesetCount;



@end


