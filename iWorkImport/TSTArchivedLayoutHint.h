/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPObject.h"


#import "TSDArchivedHint.h"



@class TSTLayoutHint;



__attribute__((visibility("hidden")))

@interface TSTArchivedLayoutHint : TSPObject <TSDArchivedHint>

{

    TSTLayoutHint *mHint;

}



- (void)dealloc;

@property(retain, nonatomic) TSTLayoutHint *hint; // @synthesize hint=mHint;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithContext:(id)arg1 hint:(id)arg2;

- (void)saveToArchiver:(id)arg1;



@end

