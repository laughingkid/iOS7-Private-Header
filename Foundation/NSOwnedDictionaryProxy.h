/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSDictionary.h"



__attribute__((visibility("hidden")))

@interface NSOwnedDictionaryProxy : NSDictionary

{

    id _owner;

}



- (unsigned long long)count;

- (id)initWithOwner:(id)arg1;

- (id)keyEnumerator;

- (id)objectForKey:(id)arg1;

- (oneway void)release;

- (id)retain;

- (void)superRelease;



@end


