/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSFastEnumeration.h"



@class NSMutableDictionary;



__attribute__((visibility("hidden")))

@interface TSCH3DDictionaryOfSet : NSObject <NSFastEnumeration>

{

    NSMutableDictionary *mSets;

}



+ (id)dictionary;

+ (id)dictionaryWithMutableDictionaryClass:(Class)arg1;

- (void)addObject:(id)arg1 forKey:(id)arg2;

- (id)allKeys;

- (unsigned long long)count;

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;

- (void)dealloc;

- (id)description;

- (id)init;

- (id)initWithMutableDictionaryClass:(Class)arg1;

- (id)objectsForKey:(id)arg1;

- (void)removeObject:(id)arg1 forKey:(id)arg2;



@end


